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

#include <tencentcloud/ape/v20200513/model/BatchDescribeOrderImageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ape::V20200513::Model;
using namespace rapidjson;
using namespace std;

BatchDescribeOrderImageRequest::BatchDescribeOrderImageRequest() :
    m_orderIdsHasBeenSet(false)
{
}

string BatchDescribeOrderImageRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_orderIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OrderIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_orderIds.begin(); itr != m_orderIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> BatchDescribeOrderImageRequest::GetOrderIds() const
{
    return m_orderIds;
}

void BatchDescribeOrderImageRequest::SetOrderIds(const vector<string>& _orderIds)
{
    m_orderIds = _orderIds;
    m_orderIdsHasBeenSet = true;
}

bool BatchDescribeOrderImageRequest::OrderIdsHasBeenSet() const
{
    return m_orderIdsHasBeenSet;
}


