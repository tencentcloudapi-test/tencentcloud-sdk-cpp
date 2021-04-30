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

#include <tencentcloud/cme/v20191029/model/CreateProjectResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace rapidjson;
using namespace std;

CreateProjectResponse::CreateProjectResponse() :
    m_projectIdHasBeenSet(false),
    m_rtmpPushInputInfoSetHasBeenSet(false)
{
}

CoreInternalOutcome CreateProjectResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("ProjectId") && !rsp["ProjectId"].IsNull())
    {
        if (!rsp["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(rsp["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (rsp.HasMember("RtmpPushInputInfoSet") && !rsp["RtmpPushInputInfoSet"].IsNull())
    {
        if (!rsp["RtmpPushInputInfoSet"].IsArray())
            return CoreInternalOutcome(Error("response `RtmpPushInputInfoSet` is not array type"));

        const Value &tmpValue = rsp["RtmpPushInputInfoSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RtmpPushInputInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_rtmpPushInputInfoSet.push_back(item);
        }
        m_rtmpPushInputInfoSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string CreateProjectResponse::GetProjectId() const
{
    return m_projectId;
}

bool CreateProjectResponse::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<RtmpPushInputInfo> CreateProjectResponse::GetRtmpPushInputInfoSet() const
{
    return m_rtmpPushInputInfoSet;
}

bool CreateProjectResponse::RtmpPushInputInfoSetHasBeenSet() const
{
    return m_rtmpPushInputInfoSetHasBeenSet;
}


