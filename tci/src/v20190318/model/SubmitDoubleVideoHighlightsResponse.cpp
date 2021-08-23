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

#include <tencentcloud/tci/v20190318/model/SubmitDoubleVideoHighlightsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

SubmitDoubleVideoHighlightsResponse::SubmitDoubleVideoHighlightsResponse() :
    m_jobIdHasBeenSet(false),
    m_notRegisteredHasBeenSet(false)
{
}

CoreInternalOutcome SubmitDoubleVideoHighlightsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("JobId") && !rsp["JobId"].IsNull())
    {
        if (!rsp["JobId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = rsp["JobId"].GetInt64();
        m_jobIdHasBeenSet = true;
    }

    if (rsp.HasMember("NotRegistered") && !rsp["NotRegistered"].IsNull())
    {
        if (!rsp["NotRegistered"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NotRegistered` is not array type"));

        const rapidjson::Value &tmpValue = rsp["NotRegistered"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_notRegistered.push_back((*itr).GetString());
        }
        m_notRegisteredHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string SubmitDoubleVideoHighlightsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobId, allocator);
    }

    if (m_notRegisteredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotRegistered";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_notRegistered.begin(); itr != m_notRegistered.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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


int64_t SubmitDoubleVideoHighlightsResponse::GetJobId() const
{
    return m_jobId;
}

bool SubmitDoubleVideoHighlightsResponse::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

vector<string> SubmitDoubleVideoHighlightsResponse::GetNotRegistered() const
{
    return m_notRegistered;
}

bool SubmitDoubleVideoHighlightsResponse::NotRegisteredHasBeenSet() const
{
    return m_notRegisteredHasBeenSet;
}


