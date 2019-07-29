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

#include <tencentcloud/mongodb/v20180408/model/SetPasswordRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mongodb::V20180408::Model;
using namespace rapidjson;
using namespace std;

SetPasswordRequest::SetPasswordRequest() :
    m_instanceIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_passwordHasBeenSet(false)
{
}

string SetPasswordRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_password.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SetPasswordRequest::GetInstanceId() const
{
    return m_instanceId;
}

void SetPasswordRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool SetPasswordRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string SetPasswordRequest::GetUserName() const
{
    return m_userName;
}

void SetPasswordRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool SetPasswordRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string SetPasswordRequest::GetPassword() const
{
    return m_password;
}

void SetPasswordRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool SetPasswordRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}


