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

#include <tencentcloud/tci/v20190318/model/AIAssistantRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tci::V20190318::Model;
using namespace rapidjson;
using namespace std;

AIAssistantRequest::AIAssistantRequest() :
    m_fileContentHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_langHasBeenSet(false),
    m_librarySetHasBeenSet(false),
    m_templateHasBeenSet(false),
    m_vocabLibNameListHasBeenSet(false),
    m_voiceEncodeTypeHasBeenSet(false),
    m_voiceFileTypeHasBeenSet(false)
{
}

string AIAssistantRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fileContentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_fileContent.c_str(), allocator).Move(), allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_fileType.c_str(), allocator).Move(), allocator);
    }

    if (m_langHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Lang";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_lang, allocator);
    }

    if (m_librarySetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LibrarySet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_librarySet.begin(); itr != m_librarySet.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_templateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Template";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_template, allocator);
    }

    if (m_vocabLibNameListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VocabLibNameList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_vocabLibNameList.begin(); itr != m_vocabLibNameList.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_voiceEncodeTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VoiceEncodeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_voiceEncodeType, allocator);
    }

    if (m_voiceFileTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VoiceFileType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_voiceFileType, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AIAssistantRequest::GetFileContent() const
{
    return m_fileContent;
}

void AIAssistantRequest::SetFileContent(const string& _fileContent)
{
    m_fileContent = _fileContent;
    m_fileContentHasBeenSet = true;
}

bool AIAssistantRequest::FileContentHasBeenSet() const
{
    return m_fileContentHasBeenSet;
}

string AIAssistantRequest::GetFileType() const
{
    return m_fileType;
}

void AIAssistantRequest::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool AIAssistantRequest::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

int64_t AIAssistantRequest::GetLang() const
{
    return m_lang;
}

void AIAssistantRequest::SetLang(const int64_t& _lang)
{
    m_lang = _lang;
    m_langHasBeenSet = true;
}

bool AIAssistantRequest::LangHasBeenSet() const
{
    return m_langHasBeenSet;
}

vector<string> AIAssistantRequest::GetLibrarySet() const
{
    return m_librarySet;
}

void AIAssistantRequest::SetLibrarySet(const vector<string>& _librarySet)
{
    m_librarySet = _librarySet;
    m_librarySetHasBeenSet = true;
}

bool AIAssistantRequest::LibrarySetHasBeenSet() const
{
    return m_librarySetHasBeenSet;
}

int64_t AIAssistantRequest::GetTemplate() const
{
    return m_template;
}

void AIAssistantRequest::SetTemplate(const int64_t& _template)
{
    m_template = _template;
    m_templateHasBeenSet = true;
}

bool AIAssistantRequest::TemplateHasBeenSet() const
{
    return m_templateHasBeenSet;
}

vector<string> AIAssistantRequest::GetVocabLibNameList() const
{
    return m_vocabLibNameList;
}

void AIAssistantRequest::SetVocabLibNameList(const vector<string>& _vocabLibNameList)
{
    m_vocabLibNameList = _vocabLibNameList;
    m_vocabLibNameListHasBeenSet = true;
}

bool AIAssistantRequest::VocabLibNameListHasBeenSet() const
{
    return m_vocabLibNameListHasBeenSet;
}

int64_t AIAssistantRequest::GetVoiceEncodeType() const
{
    return m_voiceEncodeType;
}

void AIAssistantRequest::SetVoiceEncodeType(const int64_t& _voiceEncodeType)
{
    m_voiceEncodeType = _voiceEncodeType;
    m_voiceEncodeTypeHasBeenSet = true;
}

bool AIAssistantRequest::VoiceEncodeTypeHasBeenSet() const
{
    return m_voiceEncodeTypeHasBeenSet;
}

int64_t AIAssistantRequest::GetVoiceFileType() const
{
    return m_voiceFileType;
}

void AIAssistantRequest::SetVoiceFileType(const int64_t& _voiceFileType)
{
    m_voiceFileType = _voiceFileType;
    m_voiceFileTypeHasBeenSet = true;
}

bool AIAssistantRequest::VoiceFileTypeHasBeenSet() const
{
    return m_voiceFileTypeHasBeenSet;
}


