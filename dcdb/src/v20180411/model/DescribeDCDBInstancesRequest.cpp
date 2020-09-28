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

#include <tencentcloud/dcdb/v20180411/model/DescribeDCDBInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dcdb::V20180411::Model;
using namespace rapidjson;
using namespace std;

DescribeDCDBInstancesRequest::DescribeDCDBInstancesRequest() :
    m_instanceIdsHasBeenSet(false),
    m_searchNameHasBeenSet(false),
    m_searchKeyHasBeenSet(false),
    m_projectIdsHasBeenSet(false),
    m_isFilterVpcHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_orderByTypeHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_exclusterTypeHasBeenSet(false),
    m_isFilterExclusterHasBeenSet(false),
    m_exclusterIdsHasBeenSet(false),
    m_tagKeysHasBeenSet(false),
    m_filterInstanceTypeHasBeenSet(false)
{
}

string DescribeDCDBInstancesRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_instanceIds.begin(); itr != m_instanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_searchNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SearchName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_searchName.c_str(), allocator).Move(), allocator);
    }

    if (m_searchKeyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SearchKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_searchKey.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_projectIds.begin(); itr != m_projectIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetInt64(*itr), allocator);
        }
    }

    if (m_isFilterVpcHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsFilterVpc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isFilterVpc, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_orderByHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_orderBy.c_str(), allocator).Move(), allocator);
    }

    if (m_orderByTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OrderByType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_orderByType.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_exclusterTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExclusterType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_exclusterType, allocator);
    }

    if (m_isFilterExclusterHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsFilterExcluster";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isFilterExcluster, allocator);
    }

    if (m_exclusterIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExclusterIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_exclusterIds.begin(); itr != m_exclusterIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tagKeysHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TagKeys";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_tagKeys.begin(); itr != m_tagKeys.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_filterInstanceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FilterInstanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_filterInstanceType.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeDCDBInstancesRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void DescribeDCDBInstancesRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool DescribeDCDBInstancesRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

string DescribeDCDBInstancesRequest::GetSearchName() const
{
    return m_searchName;
}

void DescribeDCDBInstancesRequest::SetSearchName(const string& _searchName)
{
    m_searchName = _searchName;
    m_searchNameHasBeenSet = true;
}

bool DescribeDCDBInstancesRequest::SearchNameHasBeenSet() const
{
    return m_searchNameHasBeenSet;
}

string DescribeDCDBInstancesRequest::GetSearchKey() const
{
    return m_searchKey;
}

void DescribeDCDBInstancesRequest::SetSearchKey(const string& _searchKey)
{
    m_searchKey = _searchKey;
    m_searchKeyHasBeenSet = true;
}

bool DescribeDCDBInstancesRequest::SearchKeyHasBeenSet() const
{
    return m_searchKeyHasBeenSet;
}

vector<int64_t> DescribeDCDBInstancesRequest::GetProjectIds() const
{
    return m_projectIds;
}

void DescribeDCDBInstancesRequest::SetProjectIds(const vector<int64_t>& _projectIds)
{
    m_projectIds = _projectIds;
    m_projectIdsHasBeenSet = true;
}

bool DescribeDCDBInstancesRequest::ProjectIdsHasBeenSet() const
{
    return m_projectIdsHasBeenSet;
}

bool DescribeDCDBInstancesRequest::GetIsFilterVpc() const
{
    return m_isFilterVpc;
}

void DescribeDCDBInstancesRequest::SetIsFilterVpc(const bool& _isFilterVpc)
{
    m_isFilterVpc = _isFilterVpc;
    m_isFilterVpcHasBeenSet = true;
}

bool DescribeDCDBInstancesRequest::IsFilterVpcHasBeenSet() const
{
    return m_isFilterVpcHasBeenSet;
}

string DescribeDCDBInstancesRequest::GetVpcId() const
{
    return m_vpcId;
}

void DescribeDCDBInstancesRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool DescribeDCDBInstancesRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string DescribeDCDBInstancesRequest::GetSubnetId() const
{
    return m_subnetId;
}

void DescribeDCDBInstancesRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool DescribeDCDBInstancesRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string DescribeDCDBInstancesRequest::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeDCDBInstancesRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeDCDBInstancesRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

string DescribeDCDBInstancesRequest::GetOrderByType() const
{
    return m_orderByType;
}

void DescribeDCDBInstancesRequest::SetOrderByType(const string& _orderByType)
{
    m_orderByType = _orderByType;
    m_orderByTypeHasBeenSet = true;
}

bool DescribeDCDBInstancesRequest::OrderByTypeHasBeenSet() const
{
    return m_orderByTypeHasBeenSet;
}

int64_t DescribeDCDBInstancesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeDCDBInstancesRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeDCDBInstancesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeDCDBInstancesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDCDBInstancesRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDCDBInstancesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeDCDBInstancesRequest::GetExclusterType() const
{
    return m_exclusterType;
}

void DescribeDCDBInstancesRequest::SetExclusterType(const int64_t& _exclusterType)
{
    m_exclusterType = _exclusterType;
    m_exclusterTypeHasBeenSet = true;
}

bool DescribeDCDBInstancesRequest::ExclusterTypeHasBeenSet() const
{
    return m_exclusterTypeHasBeenSet;
}

bool DescribeDCDBInstancesRequest::GetIsFilterExcluster() const
{
    return m_isFilterExcluster;
}

void DescribeDCDBInstancesRequest::SetIsFilterExcluster(const bool& _isFilterExcluster)
{
    m_isFilterExcluster = _isFilterExcluster;
    m_isFilterExclusterHasBeenSet = true;
}

bool DescribeDCDBInstancesRequest::IsFilterExclusterHasBeenSet() const
{
    return m_isFilterExclusterHasBeenSet;
}

vector<string> DescribeDCDBInstancesRequest::GetExclusterIds() const
{
    return m_exclusterIds;
}

void DescribeDCDBInstancesRequest::SetExclusterIds(const vector<string>& _exclusterIds)
{
    m_exclusterIds = _exclusterIds;
    m_exclusterIdsHasBeenSet = true;
}

bool DescribeDCDBInstancesRequest::ExclusterIdsHasBeenSet() const
{
    return m_exclusterIdsHasBeenSet;
}

vector<string> DescribeDCDBInstancesRequest::GetTagKeys() const
{
    return m_tagKeys;
}

void DescribeDCDBInstancesRequest::SetTagKeys(const vector<string>& _tagKeys)
{
    m_tagKeys = _tagKeys;
    m_tagKeysHasBeenSet = true;
}

bool DescribeDCDBInstancesRequest::TagKeysHasBeenSet() const
{
    return m_tagKeysHasBeenSet;
}

string DescribeDCDBInstancesRequest::GetFilterInstanceType() const
{
    return m_filterInstanceType;
}

void DescribeDCDBInstancesRequest::SetFilterInstanceType(const string& _filterInstanceType)
{
    m_filterInstanceType = _filterInstanceType;
    m_filterInstanceTypeHasBeenSet = true;
}

bool DescribeDCDBInstancesRequest::FilterInstanceTypeHasBeenSet() const
{
    return m_filterInstanceTypeHasBeenSet;
}


