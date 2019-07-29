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

#include <tencentcloud/tci/v20190318/model/ModifyLibraryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tci::V20190318::Model;
using namespace rapidjson;
using namespace std;

ModifyLibraryRequest::ModifyLibraryRequest() :
    m_libraryIdHasBeenSet(false),
    m_libraryNameHasBeenSet(false)
{
}

string ModifyLibraryRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_libraryIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LibraryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_libraryId.c_str(), allocator).Move(), allocator);
    }

    if (m_libraryNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LibraryName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_libraryName.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyLibraryRequest::GetLibraryId() const
{
    return m_libraryId;
}

void ModifyLibraryRequest::SetLibraryId(const string& _libraryId)
{
    m_libraryId = _libraryId;
    m_libraryIdHasBeenSet = true;
}

bool ModifyLibraryRequest::LibraryIdHasBeenSet() const
{
    return m_libraryIdHasBeenSet;
}

string ModifyLibraryRequest::GetLibraryName() const
{
    return m_libraryName;
}

void ModifyLibraryRequest::SetLibraryName(const string& _libraryName)
{
    m_libraryName = _libraryName;
    m_libraryNameHasBeenSet = true;
}

bool ModifyLibraryRequest::LibraryNameHasBeenSet() const
{
    return m_libraryNameHasBeenSet;
}


