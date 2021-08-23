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

#include <tencentcloud/soe/v20180724/model/TransmitOralProcessResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Soe::V20180724::Model;
using namespace std;

TransmitOralProcessResponse::TransmitOralProcessResponse() :
    m_pronAccuracyHasBeenSet(false),
    m_pronFluencyHasBeenSet(false),
    m_pronCompletionHasBeenSet(false),
    m_wordsHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_audioUrlHasBeenSet(false),
    m_sentenceInfoSetHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_suggestedScoreHasBeenSet(false)
{
}

CoreInternalOutcome TransmitOralProcessResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("PronAccuracy") && !rsp["PronAccuracy"].IsNull())
    {
        if (!rsp["PronAccuracy"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PronAccuracy` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_pronAccuracy = rsp["PronAccuracy"].GetDouble();
        m_pronAccuracyHasBeenSet = true;
    }

    if (rsp.HasMember("PronFluency") && !rsp["PronFluency"].IsNull())
    {
        if (!rsp["PronFluency"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PronFluency` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_pronFluency = rsp["PronFluency"].GetDouble();
        m_pronFluencyHasBeenSet = true;
    }

    if (rsp.HasMember("PronCompletion") && !rsp["PronCompletion"].IsNull())
    {
        if (!rsp["PronCompletion"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PronCompletion` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_pronCompletion = rsp["PronCompletion"].GetDouble();
        m_pronCompletionHasBeenSet = true;
    }

    if (rsp.HasMember("Words") && !rsp["Words"].IsNull())
    {
        if (!rsp["Words"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Words` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Words"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WordRsp item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_words.push_back(item);
        }
        m_wordsHasBeenSet = true;
    }

    if (rsp.HasMember("SessionId") && !rsp["SessionId"].IsNull())
    {
        if (!rsp["SessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(rsp["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }

    if (rsp.HasMember("AudioUrl") && !rsp["AudioUrl"].IsNull())
    {
        if (!rsp["AudioUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_audioUrl = string(rsp["AudioUrl"].GetString());
        m_audioUrlHasBeenSet = true;
    }

    if (rsp.HasMember("SentenceInfoSet") && !rsp["SentenceInfoSet"].IsNull())
    {
        if (!rsp["SentenceInfoSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SentenceInfoSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SentenceInfoSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SentenceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sentenceInfoSet.push_back(item);
        }
        m_sentenceInfoSetHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("SuggestedScore") && !rsp["SuggestedScore"].IsNull())
    {
        if (!rsp["SuggestedScore"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SuggestedScore` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_suggestedScore = rsp["SuggestedScore"].GetDouble();
        m_suggestedScoreHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string TransmitOralProcessResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_pronAccuracyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PronAccuracy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pronAccuracy, allocator);
    }

    if (m_pronFluencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PronFluency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pronFluency, allocator);
    }

    if (m_pronCompletionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PronCompletion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pronCompletion, allocator);
    }

    if (m_wordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Words";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_words.begin(); itr != m_words.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_audioUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_audioUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_sentenceInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SentenceInfoSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sentenceInfoSet.begin(); itr != m_sentenceInfoSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_suggestedScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuggestedScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_suggestedScore, allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


double TransmitOralProcessResponse::GetPronAccuracy() const
{
    return m_pronAccuracy;
}

bool TransmitOralProcessResponse::PronAccuracyHasBeenSet() const
{
    return m_pronAccuracyHasBeenSet;
}

double TransmitOralProcessResponse::GetPronFluency() const
{
    return m_pronFluency;
}

bool TransmitOralProcessResponse::PronFluencyHasBeenSet() const
{
    return m_pronFluencyHasBeenSet;
}

double TransmitOralProcessResponse::GetPronCompletion() const
{
    return m_pronCompletion;
}

bool TransmitOralProcessResponse::PronCompletionHasBeenSet() const
{
    return m_pronCompletionHasBeenSet;
}

vector<WordRsp> TransmitOralProcessResponse::GetWords() const
{
    return m_words;
}

bool TransmitOralProcessResponse::WordsHasBeenSet() const
{
    return m_wordsHasBeenSet;
}

string TransmitOralProcessResponse::GetSessionId() const
{
    return m_sessionId;
}

bool TransmitOralProcessResponse::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string TransmitOralProcessResponse::GetAudioUrl() const
{
    return m_audioUrl;
}

bool TransmitOralProcessResponse::AudioUrlHasBeenSet() const
{
    return m_audioUrlHasBeenSet;
}

vector<SentenceInfo> TransmitOralProcessResponse::GetSentenceInfoSet() const
{
    return m_sentenceInfoSet;
}

bool TransmitOralProcessResponse::SentenceInfoSetHasBeenSet() const
{
    return m_sentenceInfoSetHasBeenSet;
}

string TransmitOralProcessResponse::GetStatus() const
{
    return m_status;
}

bool TransmitOralProcessResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

double TransmitOralProcessResponse::GetSuggestedScore() const
{
    return m_suggestedScore;
}

bool TransmitOralProcessResponse::SuggestedScoreHasBeenSet() const
{
    return m_suggestedScoreHasBeenSet;
}


