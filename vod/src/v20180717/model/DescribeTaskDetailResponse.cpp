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

#include <tencentcloud/vod/v20180717/model/DescribeTaskDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

DescribeTaskDetailResponse::DescribeTaskDetailResponse() :
    m_taskTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_beginProcessTimeHasBeenSet(false),
    m_finishTimeHasBeenSet(false),
    m_procedureTaskHasBeenSet(false),
    m_editMediaTaskHasBeenSet(false),
    m_wechatPublishTaskHasBeenSet(false),
    m_composeMediaTaskHasBeenSet(false),
    m_splitMediaTaskHasBeenSet(false),
    m_wechatMiniProgramPublishTaskHasBeenSet(false),
    m_pullUploadTaskHasBeenSet(false),
    m_transcodeTaskHasBeenSet(false),
    m_concatTaskHasBeenSet(false),
    m_clipTaskHasBeenSet(false),
    m_createImageSpriteTaskHasBeenSet(false),
    m_snapshotByTimeOffsetTaskHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTaskDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TaskType") && !rsp["TaskType"].IsNull())
    {
        if (!rsp["TaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(rsp["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
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

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("BeginProcessTime") && !rsp["BeginProcessTime"].IsNull())
    {
        if (!rsp["BeginProcessTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BeginProcessTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginProcessTime = string(rsp["BeginProcessTime"].GetString());
        m_beginProcessTimeHasBeenSet = true;
    }

    if (rsp.HasMember("FinishTime") && !rsp["FinishTime"].IsNull())
    {
        if (!rsp["FinishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishTime = string(rsp["FinishTime"].GetString());
        m_finishTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ProcedureTask") && !rsp["ProcedureTask"].IsNull())
    {
        if (!rsp["ProcedureTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProcedureTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_procedureTask.Deserialize(rsp["ProcedureTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_procedureTaskHasBeenSet = true;
    }

    if (rsp.HasMember("EditMediaTask") && !rsp["EditMediaTask"].IsNull())
    {
        if (!rsp["EditMediaTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EditMediaTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_editMediaTask.Deserialize(rsp["EditMediaTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_editMediaTaskHasBeenSet = true;
    }

    if (rsp.HasMember("WechatPublishTask") && !rsp["WechatPublishTask"].IsNull())
    {
        if (!rsp["WechatPublishTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WechatPublishTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_wechatPublishTask.Deserialize(rsp["WechatPublishTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_wechatPublishTaskHasBeenSet = true;
    }

    if (rsp.HasMember("ComposeMediaTask") && !rsp["ComposeMediaTask"].IsNull())
    {
        if (!rsp["ComposeMediaTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeMediaTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_composeMediaTask.Deserialize(rsp["ComposeMediaTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_composeMediaTaskHasBeenSet = true;
    }

    if (rsp.HasMember("SplitMediaTask") && !rsp["SplitMediaTask"].IsNull())
    {
        if (!rsp["SplitMediaTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SplitMediaTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_splitMediaTask.Deserialize(rsp["SplitMediaTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_splitMediaTaskHasBeenSet = true;
    }

    if (rsp.HasMember("WechatMiniProgramPublishTask") && !rsp["WechatMiniProgramPublishTask"].IsNull())
    {
        if (!rsp["WechatMiniProgramPublishTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WechatMiniProgramPublishTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_wechatMiniProgramPublishTask.Deserialize(rsp["WechatMiniProgramPublishTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_wechatMiniProgramPublishTaskHasBeenSet = true;
    }

    if (rsp.HasMember("PullUploadTask") && !rsp["PullUploadTask"].IsNull())
    {
        if (!rsp["PullUploadTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PullUploadTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pullUploadTask.Deserialize(rsp["PullUploadTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pullUploadTaskHasBeenSet = true;
    }

    if (rsp.HasMember("TranscodeTask") && !rsp["TranscodeTask"].IsNull())
    {
        if (!rsp["TranscodeTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_transcodeTask.Deserialize(rsp["TranscodeTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_transcodeTaskHasBeenSet = true;
    }

    if (rsp.HasMember("ConcatTask") && !rsp["ConcatTask"].IsNull())
    {
        if (!rsp["ConcatTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConcatTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_concatTask.Deserialize(rsp["ConcatTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_concatTaskHasBeenSet = true;
    }

    if (rsp.HasMember("ClipTask") && !rsp["ClipTask"].IsNull())
    {
        if (!rsp["ClipTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClipTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clipTask.Deserialize(rsp["ClipTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clipTaskHasBeenSet = true;
    }

    if (rsp.HasMember("CreateImageSpriteTask") && !rsp["CreateImageSpriteTask"].IsNull())
    {
        if (!rsp["CreateImageSpriteTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CreateImageSpriteTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_createImageSpriteTask.Deserialize(rsp["CreateImageSpriteTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_createImageSpriteTaskHasBeenSet = true;
    }

    if (rsp.HasMember("SnapshotByTimeOffsetTask") && !rsp["SnapshotByTimeOffsetTask"].IsNull())
    {
        if (!rsp["SnapshotByTimeOffsetTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotByTimeOffsetTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_snapshotByTimeOffsetTask.Deserialize(rsp["SnapshotByTimeOffsetTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_snapshotByTimeOffsetTaskHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeTaskDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_beginProcessTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginProcessTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_beginProcessTime.c_str(), allocator).Move(), allocator);
    }

    if (m_finishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_finishTime.c_str(), allocator).Move(), allocator);
    }

    if (m_procedureTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcedureTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_procedureTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_editMediaTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EditMediaTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_editMediaTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_wechatPublishTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WechatPublishTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_wechatPublishTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_composeMediaTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComposeMediaTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_composeMediaTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_splitMediaTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SplitMediaTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_splitMediaTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_wechatMiniProgramPublishTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WechatMiniProgramPublishTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_wechatMiniProgramPublishTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pullUploadTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PullUploadTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pullUploadTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_transcodeTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranscodeTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_transcodeTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_concatTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConcatTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_concatTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_clipTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClipTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clipTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createImageSpriteTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateImageSpriteTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_createImageSpriteTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_snapshotByTimeOffsetTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotByTimeOffsetTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_snapshotByTimeOffsetTask.ToJsonObject(value[key.c_str()], allocator);
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


string DescribeTaskDetailResponse::GetTaskType() const
{
    return m_taskType;
}

bool DescribeTaskDetailResponse::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string DescribeTaskDetailResponse::GetStatus() const
{
    return m_status;
}

bool DescribeTaskDetailResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeTaskDetailResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeTaskDetailResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeTaskDetailResponse::GetBeginProcessTime() const
{
    return m_beginProcessTime;
}

bool DescribeTaskDetailResponse::BeginProcessTimeHasBeenSet() const
{
    return m_beginProcessTimeHasBeenSet;
}

string DescribeTaskDetailResponse::GetFinishTime() const
{
    return m_finishTime;
}

bool DescribeTaskDetailResponse::FinishTimeHasBeenSet() const
{
    return m_finishTimeHasBeenSet;
}

ProcedureTask DescribeTaskDetailResponse::GetProcedureTask() const
{
    return m_procedureTask;
}

bool DescribeTaskDetailResponse::ProcedureTaskHasBeenSet() const
{
    return m_procedureTaskHasBeenSet;
}

EditMediaTask DescribeTaskDetailResponse::GetEditMediaTask() const
{
    return m_editMediaTask;
}

bool DescribeTaskDetailResponse::EditMediaTaskHasBeenSet() const
{
    return m_editMediaTaskHasBeenSet;
}

WechatPublishTask DescribeTaskDetailResponse::GetWechatPublishTask() const
{
    return m_wechatPublishTask;
}

bool DescribeTaskDetailResponse::WechatPublishTaskHasBeenSet() const
{
    return m_wechatPublishTaskHasBeenSet;
}

ComposeMediaTask DescribeTaskDetailResponse::GetComposeMediaTask() const
{
    return m_composeMediaTask;
}

bool DescribeTaskDetailResponse::ComposeMediaTaskHasBeenSet() const
{
    return m_composeMediaTaskHasBeenSet;
}

SplitMediaTask DescribeTaskDetailResponse::GetSplitMediaTask() const
{
    return m_splitMediaTask;
}

bool DescribeTaskDetailResponse::SplitMediaTaskHasBeenSet() const
{
    return m_splitMediaTaskHasBeenSet;
}

WechatMiniProgramPublishTask DescribeTaskDetailResponse::GetWechatMiniProgramPublishTask() const
{
    return m_wechatMiniProgramPublishTask;
}

bool DescribeTaskDetailResponse::WechatMiniProgramPublishTaskHasBeenSet() const
{
    return m_wechatMiniProgramPublishTaskHasBeenSet;
}

PullUploadTask DescribeTaskDetailResponse::GetPullUploadTask() const
{
    return m_pullUploadTask;
}

bool DescribeTaskDetailResponse::PullUploadTaskHasBeenSet() const
{
    return m_pullUploadTaskHasBeenSet;
}

TranscodeTask2017 DescribeTaskDetailResponse::GetTranscodeTask() const
{
    return m_transcodeTask;
}

bool DescribeTaskDetailResponse::TranscodeTaskHasBeenSet() const
{
    return m_transcodeTaskHasBeenSet;
}

ConcatTask2017 DescribeTaskDetailResponse::GetConcatTask() const
{
    return m_concatTask;
}

bool DescribeTaskDetailResponse::ConcatTaskHasBeenSet() const
{
    return m_concatTaskHasBeenSet;
}

ClipTask2017 DescribeTaskDetailResponse::GetClipTask() const
{
    return m_clipTask;
}

bool DescribeTaskDetailResponse::ClipTaskHasBeenSet() const
{
    return m_clipTaskHasBeenSet;
}

CreateImageSpriteTask2017 DescribeTaskDetailResponse::GetCreateImageSpriteTask() const
{
    return m_createImageSpriteTask;
}

bool DescribeTaskDetailResponse::CreateImageSpriteTaskHasBeenSet() const
{
    return m_createImageSpriteTaskHasBeenSet;
}

SnapshotByTimeOffsetTask2017 DescribeTaskDetailResponse::GetSnapshotByTimeOffsetTask() const
{
    return m_snapshotByTimeOffsetTask;
}

bool DescribeTaskDetailResponse::SnapshotByTimeOffsetTaskHasBeenSet() const
{
    return m_snapshotByTimeOffsetTaskHasBeenSet;
}


