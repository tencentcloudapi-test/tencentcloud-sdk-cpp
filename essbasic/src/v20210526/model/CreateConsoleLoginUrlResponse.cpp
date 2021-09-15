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

#include <tencentcloud/essbasic/v20210526/model/CreateConsoleLoginUrlResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

CreateConsoleLoginUrlResponse::CreateConsoleLoginUrlResponse() :
    m_consoleUrlHasBeenSet(false),
    m_isActivatedHasBeenSet(false)
{
}

CoreInternalOutcome CreateConsoleLoginUrlResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ConsoleUrl") && !rsp["ConsoleUrl"].IsNull())
    {
        if (!rsp["ConsoleUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsoleUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consoleUrl = string(rsp["ConsoleUrl"].GetString());
        m_consoleUrlHasBeenSet = true;
    }

    if (rsp.HasMember("IsActivated") && !rsp["IsActivated"].IsNull())
    {
        if (!rsp["IsActivated"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsActivated` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isActivated = rsp["IsActivated"].GetBool();
        m_isActivatedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateConsoleLoginUrlResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_consoleUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsoleUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consoleUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_isActivatedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsActivated";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isActivated, allocator);
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


string CreateConsoleLoginUrlResponse::GetConsoleUrl() const
{
    return m_consoleUrl;
}

bool CreateConsoleLoginUrlResponse::ConsoleUrlHasBeenSet() const
{
    return m_consoleUrlHasBeenSet;
}

bool CreateConsoleLoginUrlResponse::GetIsActivated() const
{
    return m_isActivated;
}

bool CreateConsoleLoginUrlResponse::IsActivatedHasBeenSet() const
{
    return m_isActivatedHasBeenSet;
}


