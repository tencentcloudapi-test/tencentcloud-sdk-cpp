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

#include <tencentcloud/drm/v20181115/model/DescribeFairPlayPemRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Drm::V20181115::Model;
using namespace rapidjson;
using namespace std;

DescribeFairPlayPemRequest::DescribeFairPlayPemRequest() :
    m_bailorIdHasBeenSet(false),
    m_fairPlayPemIdHasBeenSet(false)
{
}

string DescribeFairPlayPemRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_bailorIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BailorId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bailorId, allocator);
    }

    if (m_fairPlayPemIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FairPlayPemId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fairPlayPemId, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeFairPlayPemRequest::GetBailorId() const
{
    return m_bailorId;
}

void DescribeFairPlayPemRequest::SetBailorId(const uint64_t& _bailorId)
{
    m_bailorId = _bailorId;
    m_bailorIdHasBeenSet = true;
}

bool DescribeFairPlayPemRequest::BailorIdHasBeenSet() const
{
    return m_bailorIdHasBeenSet;
}

uint64_t DescribeFairPlayPemRequest::GetFairPlayPemId() const
{
    return m_fairPlayPemId;
}

void DescribeFairPlayPemRequest::SetFairPlayPemId(const uint64_t& _fairPlayPemId)
{
    m_fairPlayPemId = _fairPlayPemId;
    m_fairPlayPemIdHasBeenSet = true;
}

bool DescribeFairPlayPemRequest::FairPlayPemIdHasBeenSet() const
{
    return m_fairPlayPemIdHasBeenSet;
}


