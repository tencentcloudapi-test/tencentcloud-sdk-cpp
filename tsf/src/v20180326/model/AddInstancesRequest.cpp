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

#include <tencentcloud/tsf/v20180326/model/AddInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace rapidjson;
using namespace std;

AddInstancesRequest::AddInstancesRequest() :
    m_clusterIdHasBeenSet(false),
    m_instanceIdListHasBeenSet(false),
    m_osNameHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_sgIdHasBeenSet(false),
    m_instanceImportModeHasBeenSet(false)
{
}

string AddInstancesRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_instanceIdList.begin(); itr != m_instanceIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_osNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OsName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_osName.c_str(), allocator).Move(), allocator);
    }

    if (m_imageIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_keyIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "KeyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_keyId.c_str(), allocator).Move(), allocator);
    }

    if (m_sgIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SgId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_sgId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceImportModeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceImportMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceImportMode.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddInstancesRequest::GetClusterId() const
{
    return m_clusterId;
}

void AddInstancesRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool AddInstancesRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

vector<string> AddInstancesRequest::GetInstanceIdList() const
{
    return m_instanceIdList;
}

void AddInstancesRequest::SetInstanceIdList(const vector<string>& _instanceIdList)
{
    m_instanceIdList = _instanceIdList;
    m_instanceIdListHasBeenSet = true;
}

bool AddInstancesRequest::InstanceIdListHasBeenSet() const
{
    return m_instanceIdListHasBeenSet;
}

string AddInstancesRequest::GetOsName() const
{
    return m_osName;
}

void AddInstancesRequest::SetOsName(const string& _osName)
{
    m_osName = _osName;
    m_osNameHasBeenSet = true;
}

bool AddInstancesRequest::OsNameHasBeenSet() const
{
    return m_osNameHasBeenSet;
}

string AddInstancesRequest::GetImageId() const
{
    return m_imageId;
}

void AddInstancesRequest::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool AddInstancesRequest::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string AddInstancesRequest::GetPassword() const
{
    return m_password;
}

void AddInstancesRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool AddInstancesRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string AddInstancesRequest::GetKeyId() const
{
    return m_keyId;
}

void AddInstancesRequest::SetKeyId(const string& _keyId)
{
    m_keyId = _keyId;
    m_keyIdHasBeenSet = true;
}

bool AddInstancesRequest::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

string AddInstancesRequest::GetSgId() const
{
    return m_sgId;
}

void AddInstancesRequest::SetSgId(const string& _sgId)
{
    m_sgId = _sgId;
    m_sgIdHasBeenSet = true;
}

bool AddInstancesRequest::SgIdHasBeenSet() const
{
    return m_sgIdHasBeenSet;
}

string AddInstancesRequest::GetInstanceImportMode() const
{
    return m_instanceImportMode;
}

void AddInstancesRequest::SetInstanceImportMode(const string& _instanceImportMode)
{
    m_instanceImportMode = _instanceImportMode;
    m_instanceImportModeHasBeenSet = true;
}

bool AddInstancesRequest::InstanceImportModeHasBeenSet() const
{
    return m_instanceImportModeHasBeenSet;
}


