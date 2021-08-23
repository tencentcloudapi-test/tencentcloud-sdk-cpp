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

#include <tencentcloud/waf/v20180125/model/AccessRuleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

AccessRuleInfo::AccessRuleInfo() :
    m_fullTextHasBeenSet(false),
    m_keyValueHasBeenSet(false),
    m_tagHasBeenSet(false)
{
}

CoreInternalOutcome AccessRuleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FullText") && !value["FullText"].IsNull())
    {
        if (!value["FullText"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AccessRuleInfo.FullText` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_fullText.Deserialize(value["FullText"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_fullTextHasBeenSet = true;
    }

    if (value.HasMember("KeyValue") && !value["KeyValue"].IsNull())
    {
        if (!value["KeyValue"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AccessRuleInfo.KeyValue` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_keyValue.Deserialize(value["KeyValue"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_keyValueHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AccessRuleInfo.Tag` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tag.Deserialize(value["Tag"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccessRuleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fullTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fullText.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_keyValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_keyValue.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tag.ToJsonObject(value[key.c_str()], allocator);
    }

}


AccessFullTextInfo AccessRuleInfo::GetFullText() const
{
    return m_fullText;
}

void AccessRuleInfo::SetFullText(const AccessFullTextInfo& _fullText)
{
    m_fullText = _fullText;
    m_fullTextHasBeenSet = true;
}

bool AccessRuleInfo::FullTextHasBeenSet() const
{
    return m_fullTextHasBeenSet;
}

AccessRuleKeyValueInfo AccessRuleInfo::GetKeyValue() const
{
    return m_keyValue;
}

void AccessRuleInfo::SetKeyValue(const AccessRuleKeyValueInfo& _keyValue)
{
    m_keyValue = _keyValue;
    m_keyValueHasBeenSet = true;
}

bool AccessRuleInfo::KeyValueHasBeenSet() const
{
    return m_keyValueHasBeenSet;
}

AccessRuleTagInfo AccessRuleInfo::GetTag() const
{
    return m_tag;
}

void AccessRuleInfo::SetTag(const AccessRuleTagInfo& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool AccessRuleInfo::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

