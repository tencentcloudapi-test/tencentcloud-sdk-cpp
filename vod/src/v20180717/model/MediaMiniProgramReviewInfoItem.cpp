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

#include <tencentcloud/vod/v20180717/model/MediaMiniProgramReviewInfoItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

MediaMiniProgramReviewInfoItem::MediaMiniProgramReviewInfoItem() :
    m_definitionHasBeenSet(false),
    m_metaDataHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_reviewResultHasBeenSet(false),
    m_reviewSummeryHasBeenSet(false)
{
}

CoreInternalOutcome MediaMiniProgramReviewInfoItem::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `MediaMiniProgramReviewInfoItem.Definition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetInt64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("MetaData") && !value["MetaData"].IsNull())
    {
        if (!value["MetaData"].IsObject())
        {
            return CoreInternalOutcome(Error("response `MediaMiniProgramReviewInfoItem.MetaData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_metaData.Deserialize(value["MetaData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_metaDataHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Error("response `MediaMiniProgramReviewInfoItem.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("ReviewResult") && !value["ReviewResult"].IsNull())
    {
        if (!value["ReviewResult"].IsString())
        {
            return CoreInternalOutcome(Error("response `MediaMiniProgramReviewInfoItem.ReviewResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reviewResult = string(value["ReviewResult"].GetString());
        m_reviewResultHasBeenSet = true;
    }

    if (value.HasMember("ReviewSummery") && !value["ReviewSummery"].IsNull())
    {
        if (!value["ReviewSummery"].IsObject())
        {
            return CoreInternalOutcome(Error("response `MediaMiniProgramReviewInfoItem.ReviewSummery` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_reviewSummery.Deserialize(value["ReviewSummery"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_reviewSummeryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaMiniProgramReviewInfoItem::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_definitionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
    }

    if (m_metaDataHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MetaData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_metaData.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_urlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_reviewResultHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReviewResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_reviewResult.c_str(), allocator).Move(), allocator);
    }

    if (m_reviewSummeryHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReviewSummery";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_reviewSummery.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t MediaMiniProgramReviewInfoItem::GetDefinition() const
{
    return m_definition;
}

void MediaMiniProgramReviewInfoItem::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool MediaMiniProgramReviewInfoItem::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

MediaMetaData MediaMiniProgramReviewInfoItem::GetMetaData() const
{
    return m_metaData;
}

void MediaMiniProgramReviewInfoItem::SetMetaData(const MediaMetaData& _metaData)
{
    m_metaData = _metaData;
    m_metaDataHasBeenSet = true;
}

bool MediaMiniProgramReviewInfoItem::MetaDataHasBeenSet() const
{
    return m_metaDataHasBeenSet;
}

string MediaMiniProgramReviewInfoItem::GetUrl() const
{
    return m_url;
}

void MediaMiniProgramReviewInfoItem::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool MediaMiniProgramReviewInfoItem::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string MediaMiniProgramReviewInfoItem::GetReviewResult() const
{
    return m_reviewResult;
}

void MediaMiniProgramReviewInfoItem::SetReviewResult(const string& _reviewResult)
{
    m_reviewResult = _reviewResult;
    m_reviewResultHasBeenSet = true;
}

bool MediaMiniProgramReviewInfoItem::ReviewResultHasBeenSet() const
{
    return m_reviewResultHasBeenSet;
}

MediaMiniProgramReviewElem MediaMiniProgramReviewInfoItem::GetReviewSummery() const
{
    return m_reviewSummery;
}

void MediaMiniProgramReviewInfoItem::SetReviewSummery(const MediaMiniProgramReviewElem& _reviewSummery)
{
    m_reviewSummery = _reviewSummery;
    m_reviewSummeryHasBeenSet = true;
}

bool MediaMiniProgramReviewInfoItem::ReviewSummeryHasBeenSet() const
{
    return m_reviewSummeryHasBeenSet;
}

