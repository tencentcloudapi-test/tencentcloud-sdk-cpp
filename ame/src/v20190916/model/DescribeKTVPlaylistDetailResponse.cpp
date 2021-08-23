/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/ame/v20190916/model/DescribeKTVPlaylistDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ame::V20190916::Model;
using namespace std;

DescribeKTVPlaylistDetailResponse::DescribeKTVPlaylistDetailResponse() :
    m_kTVMusicInfoSetHasBeenSet(false),
    m_playlistBaseInfoHasBeenSet(false)
{
}

CoreInternalOutcome DescribeKTVPlaylistDetailResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("KTVMusicInfoSet") && !rsp["KTVMusicInfoSet"].IsNull())
    {
        if (!rsp["KTVMusicInfoSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KTVMusicInfoSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["KTVMusicInfoSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KTVMusicBaseInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_kTVMusicInfoSet.push_back(item);
        }
        m_kTVMusicInfoSetHasBeenSet = true;
    }

    if (rsp.HasMember("PlaylistBaseInfo") && !rsp["PlaylistBaseInfo"].IsNull())
    {
        if (!rsp["PlaylistBaseInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PlaylistBaseInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_playlistBaseInfo.Deserialize(rsp["PlaylistBaseInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_playlistBaseInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeKTVPlaylistDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_kTVMusicInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KTVMusicInfoSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_kTVMusicInfoSet.begin(); itr != m_kTVMusicInfoSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_playlistBaseInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlaylistBaseInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_playlistBaseInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


vector<KTVMusicBaseInfo> DescribeKTVPlaylistDetailResponse::GetKTVMusicInfoSet() const
{
    return m_kTVMusicInfoSet;
}

bool DescribeKTVPlaylistDetailResponse::KTVMusicInfoSetHasBeenSet() const
{
    return m_kTVMusicInfoSetHasBeenSet;
}

KTVPlaylistBaseInfo DescribeKTVPlaylistDetailResponse::GetPlaylistBaseInfo() const
{
    return m_playlistBaseInfo;
}

bool DescribeKTVPlaylistDetailResponse::PlaylistBaseInfoHasBeenSet() const
{
    return m_playlistBaseInfoHasBeenSet;
}


