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

#include <tencentcloud/vpc/v20170312/model/ModifyVpcEndPointAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace rapidjson;
using namespace std;

ModifyVpcEndPointAttributeRequest::ModifyVpcEndPointAttributeRequest() :
    m_endPointIdHasBeenSet(false),
    m_endPointNameHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false)
{
}

string ModifyVpcEndPointAttributeRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_endPointIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EndPointId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_endPointId.c_str(), allocator).Move(), allocator);
    }

    if (m_endPointNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EndPointName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_endPointName.c_str(), allocator).Move(), allocator);
    }

    if (m_securityGroupIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SecurityGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_securityGroupIds.begin(); itr != m_securityGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyVpcEndPointAttributeRequest::GetEndPointId() const
{
    return m_endPointId;
}

void ModifyVpcEndPointAttributeRequest::SetEndPointId(const string& _endPointId)
{
    m_endPointId = _endPointId;
    m_endPointIdHasBeenSet = true;
}

bool ModifyVpcEndPointAttributeRequest::EndPointIdHasBeenSet() const
{
    return m_endPointIdHasBeenSet;
}

string ModifyVpcEndPointAttributeRequest::GetEndPointName() const
{
    return m_endPointName;
}

void ModifyVpcEndPointAttributeRequest::SetEndPointName(const string& _endPointName)
{
    m_endPointName = _endPointName;
    m_endPointNameHasBeenSet = true;
}

bool ModifyVpcEndPointAttributeRequest::EndPointNameHasBeenSet() const
{
    return m_endPointNameHasBeenSet;
}

vector<string> ModifyVpcEndPointAttributeRequest::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void ModifyVpcEndPointAttributeRequest::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool ModifyVpcEndPointAttributeRequest::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}


