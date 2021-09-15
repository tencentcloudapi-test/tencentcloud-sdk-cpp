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

#include <tencentcloud/essbasic/v20201222/model/CancelFlowRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20201222::Model;
using namespace std;

CancelFlowRequest::CancelFlowRequest() :
    m_callerHasBeenSet(false),
    m_flowIdHasBeenSet(false),
    m_cancelMessageHasBeenSet(false)
{
}

string CancelFlowRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_callerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Caller";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_caller.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowId.c_str(), allocator).Move(), allocator);
    }

    if (m_cancelMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CancelMessage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cancelMessage.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Caller CancelFlowRequest::GetCaller() const
{
    return m_caller;
}

void CancelFlowRequest::SetCaller(const Caller& _caller)
{
    m_caller = _caller;
    m_callerHasBeenSet = true;
}

bool CancelFlowRequest::CallerHasBeenSet() const
{
    return m_callerHasBeenSet;
}

string CancelFlowRequest::GetFlowId() const
{
    return m_flowId;
}

void CancelFlowRequest::SetFlowId(const string& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool CancelFlowRequest::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

string CancelFlowRequest::GetCancelMessage() const
{
    return m_cancelMessage;
}

void CancelFlowRequest::SetCancelMessage(const string& _cancelMessage)
{
    m_cancelMessage = _cancelMessage;
    m_cancelMessageHasBeenSet = true;
}

bool CancelFlowRequest::CancelMessageHasBeenSet() const
{
    return m_cancelMessageHasBeenSet;
}


