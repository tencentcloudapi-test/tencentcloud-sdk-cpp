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

#include <tencentcloud/tcss/v20201101/model/ModifyAssetImageScanStopRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ModifyAssetImageScanStopRequest::ModifyAssetImageScanStopRequest() :
    m_taskIDHasBeenSet(false),
    m_imagesHasBeenSet(false)
{
}

string ModifyAssetImageScanStopRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskID.c_str(), allocator).Move(), allocator);
    }

    if (m_imagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Images";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_images.begin(); itr != m_images.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAssetImageScanStopRequest::GetTaskID() const
{
    return m_taskID;
}

void ModifyAssetImageScanStopRequest::SetTaskID(const string& _taskID)
{
    m_taskID = _taskID;
    m_taskIDHasBeenSet = true;
}

bool ModifyAssetImageScanStopRequest::TaskIDHasBeenSet() const
{
    return m_taskIDHasBeenSet;
}

vector<string> ModifyAssetImageScanStopRequest::GetImages() const
{
    return m_images;
}

void ModifyAssetImageScanStopRequest::SetImages(const vector<string>& _images)
{
    m_images = _images;
    m_imagesHasBeenSet = true;
}

bool ModifyAssetImageScanStopRequest::ImagesHasBeenSet() const
{
    return m_imagesHasBeenSet;
}


