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

#include <tencentcloud/cam/v20190116/model/LoginActionFlag.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cam::V20190116::Model;
using namespace rapidjson;
using namespace std;

LoginActionFlag::LoginActionFlag() :
    m_phoneHasBeenSet(false),
    m_tokenHasBeenSet(false),
    m_stokenHasBeenSet(false),
    m_wechatHasBeenSet(false),
    m_customHasBeenSet(false)
{
}

CoreInternalOutcome LoginActionFlag::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Phone") && !value["Phone"].IsNull())
    {
        if (!value["Phone"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `LoginActionFlag.Phone` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_phone = value["Phone"].GetUint64();
        m_phoneHasBeenSet = true;
    }

    if (value.HasMember("Token") && !value["Token"].IsNull())
    {
        if (!value["Token"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `LoginActionFlag.Token` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_token = value["Token"].GetUint64();
        m_tokenHasBeenSet = true;
    }

    if (value.HasMember("Stoken") && !value["Stoken"].IsNull())
    {
        if (!value["Stoken"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `LoginActionFlag.Stoken` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_stoken = value["Stoken"].GetUint64();
        m_stokenHasBeenSet = true;
    }

    if (value.HasMember("Wechat") && !value["Wechat"].IsNull())
    {
        if (!value["Wechat"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `LoginActionFlag.Wechat` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_wechat = value["Wechat"].GetUint64();
        m_wechatHasBeenSet = true;
    }

    if (value.HasMember("Custom") && !value["Custom"].IsNull())
    {
        if (!value["Custom"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `LoginActionFlag.Custom` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_custom = value["Custom"].GetUint64();
        m_customHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LoginActionFlag::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_phoneHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Phone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_phone, allocator);
    }

    if (m_tokenHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Token";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_token, allocator);
    }

    if (m_stokenHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Stoken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stoken, allocator);
    }

    if (m_wechatHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Wechat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_wechat, allocator);
    }

    if (m_customHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Custom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_custom, allocator);
    }

}


uint64_t LoginActionFlag::GetPhone() const
{
    return m_phone;
}

void LoginActionFlag::SetPhone(const uint64_t& _phone)
{
    m_phone = _phone;
    m_phoneHasBeenSet = true;
}

bool LoginActionFlag::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

uint64_t LoginActionFlag::GetToken() const
{
    return m_token;
}

void LoginActionFlag::SetToken(const uint64_t& _token)
{
    m_token = _token;
    m_tokenHasBeenSet = true;
}

bool LoginActionFlag::TokenHasBeenSet() const
{
    return m_tokenHasBeenSet;
}

uint64_t LoginActionFlag::GetStoken() const
{
    return m_stoken;
}

void LoginActionFlag::SetStoken(const uint64_t& _stoken)
{
    m_stoken = _stoken;
    m_stokenHasBeenSet = true;
}

bool LoginActionFlag::StokenHasBeenSet() const
{
    return m_stokenHasBeenSet;
}

uint64_t LoginActionFlag::GetWechat() const
{
    return m_wechat;
}

void LoginActionFlag::SetWechat(const uint64_t& _wechat)
{
    m_wechat = _wechat;
    m_wechatHasBeenSet = true;
}

bool LoginActionFlag::WechatHasBeenSet() const
{
    return m_wechatHasBeenSet;
}

uint64_t LoginActionFlag::GetCustom() const
{
    return m_custom;
}

void LoginActionFlag::SetCustom(const uint64_t& _custom)
{
    m_custom = _custom;
    m_customHasBeenSet = true;
}

bool LoginActionFlag::CustomHasBeenSet() const
{
    return m_customHasBeenSet;
}

