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

#include <tencentcloud/tdid/v20210519/model/VerifyCredentialResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

VerifyCredentialResponse::VerifyCredentialResponse() :
    m_resultHasBeenSet(false),
    m_verifyCodeHasBeenSet(false),
    m_verifyMessageHasBeenSet(false)
{
}

CoreInternalOutcome VerifyCredentialResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Result") && !rsp["Result"].IsNull())
    {
        if (!rsp["Result"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Result` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_result = rsp["Result"].GetBool();
        m_resultHasBeenSet = true;
    }

    if (rsp.HasMember("VerifyCode") && !rsp["VerifyCode"].IsNull())
    {
        if (!rsp["VerifyCode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VerifyCode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_verifyCode = rsp["VerifyCode"].GetUint64();
        m_verifyCodeHasBeenSet = true;
    }

    if (rsp.HasMember("VerifyMessage") && !rsp["VerifyMessage"].IsNull())
    {
        if (!rsp["VerifyMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VerifyMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verifyMessage = string(rsp["VerifyMessage"].GetString());
        m_verifyMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string VerifyCredentialResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_result, allocator);
    }

    if (m_verifyCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_verifyCode, allocator);
    }

    if (m_verifyMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_verifyMessage.c_str(), allocator).Move(), allocator);
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


bool VerifyCredentialResponse::GetResult() const
{
    return m_result;
}

bool VerifyCredentialResponse::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

uint64_t VerifyCredentialResponse::GetVerifyCode() const
{
    return m_verifyCode;
}

bool VerifyCredentialResponse::VerifyCodeHasBeenSet() const
{
    return m_verifyCodeHasBeenSet;
}

string VerifyCredentialResponse::GetVerifyMessage() const
{
    return m_verifyMessage;
}

bool VerifyCredentialResponse::VerifyMessageHasBeenSet() const
{
    return m_verifyMessageHasBeenSet;
}


