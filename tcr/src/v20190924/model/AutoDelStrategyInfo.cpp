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

#include <tencentcloud/tcr/v20190924/model/AutoDelStrategyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

AutoDelStrategyInfo::AutoDelStrategyInfo() :
    m_usernameHasBeenSet(false),
    m_repoNameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_validHasBeenSet(false),
    m_creationTimeHasBeenSet(false)
{
}

CoreInternalOutcome AutoDelStrategyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Username") && !value["Username"].IsNull())
    {
        if (!value["Username"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoDelStrategyInfo.Username` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_username = string(value["Username"].GetString());
        m_usernameHasBeenSet = true;
    }

    if (value.HasMember("RepoName") && !value["RepoName"].IsNull())
    {
        if (!value["RepoName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoDelStrategyInfo.RepoName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repoName = string(value["RepoName"].GetString());
        m_repoNameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoDelStrategyInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoDelStrategyInfo.Value` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_value = value["Value"].GetInt64();
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Valid") && !value["Valid"].IsNull())
    {
        if (!value["Valid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoDelStrategyInfo.Valid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_valid = value["Valid"].GetInt64();
        m_validHasBeenSet = true;
    }

    if (value.HasMember("CreationTime") && !value["CreationTime"].IsNull())
    {
        if (!value["CreationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoDelStrategyInfo.CreationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationTime = string(value["CreationTime"].GetString());
        m_creationTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AutoDelStrategyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_usernameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Username";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_username.c_str(), allocator).Move(), allocator);
    }

    if (m_repoNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repoName.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_value, allocator);
    }

    if (m_validHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Valid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_valid, allocator);
    }

    if (m_creationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creationTime.c_str(), allocator).Move(), allocator);
    }

}


string AutoDelStrategyInfo::GetUsername() const
{
    return m_username;
}

void AutoDelStrategyInfo::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool AutoDelStrategyInfo::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

string AutoDelStrategyInfo::GetRepoName() const
{
    return m_repoName;
}

void AutoDelStrategyInfo::SetRepoName(const string& _repoName)
{
    m_repoName = _repoName;
    m_repoNameHasBeenSet = true;
}

bool AutoDelStrategyInfo::RepoNameHasBeenSet() const
{
    return m_repoNameHasBeenSet;
}

string AutoDelStrategyInfo::GetType() const
{
    return m_type;
}

void AutoDelStrategyInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AutoDelStrategyInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t AutoDelStrategyInfo::GetValue() const
{
    return m_value;
}

void AutoDelStrategyInfo::SetValue(const int64_t& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool AutoDelStrategyInfo::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

int64_t AutoDelStrategyInfo::GetValid() const
{
    return m_valid;
}

void AutoDelStrategyInfo::SetValid(const int64_t& _valid)
{
    m_valid = _valid;
    m_validHasBeenSet = true;
}

bool AutoDelStrategyInfo::ValidHasBeenSet() const
{
    return m_validHasBeenSet;
}

string AutoDelStrategyInfo::GetCreationTime() const
{
    return m_creationTime;
}

void AutoDelStrategyInfo::SetCreationTime(const string& _creationTime)
{
    m_creationTime = _creationTime;
    m_creationTimeHasBeenSet = true;
}

bool AutoDelStrategyInfo::CreationTimeHasBeenSet() const
{
    return m_creationTimeHasBeenSet;
}

