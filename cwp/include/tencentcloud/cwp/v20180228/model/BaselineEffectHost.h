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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEEFFECTHOST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEEFFECTHOST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 基线影响主机信息
                */
                class BaselineEffectHost : public AbstractModel
                {
                public:
                    BaselineEffectHost();
                    ~BaselineEffectHost() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取通过项
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PassCount 通过项
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetPassCount() const;

                    /**
                     * 设置通过项
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PassCount 通过项
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPassCount(const uint64_t& _passCount);

                    /**
                     * 判断参数 PassCount 是否已赋值
                     * @return PassCount 是否已赋值
                     */
                    bool PassCountHasBeenSet() const;

                    /**
                     * 获取风险项
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailCount 风险项
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetFailCount() const;

                    /**
                     * 设置风险项
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FailCount 风险项
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFailCount(const uint64_t& _failCount);

                    /**
                     * 判断参数 FailCount 是否已赋值
                     * @return FailCount 是否已赋值
                     */
                    bool FailCountHasBeenSet() const;

                    /**
                     * 获取首次检测事件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FirstScanTime 首次检测事件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFirstScanTime() const;

                    /**
                     * 设置首次检测事件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FirstScanTime 首次检测事件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFirstScanTime(const std::string& _firstScanTime);

                    /**
                     * 判断参数 FirstScanTime 是否已赋值
                     * @return FirstScanTime 是否已赋值
                     */
                    bool FirstScanTimeHasBeenSet() const;

                    /**
                     * 获取最后检测时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastScanTime 最后检测时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLastScanTime() const;

                    /**
                     * 设置最后检测时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LastScanTime 最后检测时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLastScanTime(const std::string& _lastScanTime);

                    /**
                     * 判断参数 LastScanTime 是否已赋值
                     * @return LastScanTime 是否已赋值
                     */
                    bool LastScanTimeHasBeenSet() const;

                    /**
                     * 获取处理状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 处理状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置处理状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Status 处理状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取主机Quuid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Quuid 主机Quuid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置主机Quuid
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Quuid 主机Quuid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取主机IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostIp 主机IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置主机IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HostIp 主机IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHostIp(const std::string& _hostIp);

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     */
                    bool HostIpHasBeenSet() const;

                    /**
                     * 获取主机别名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AliasName 主机别名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAliasName() const;

                    /**
                     * 设置主机别名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AliasName 主机别名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAliasName(const std::string& _aliasName);

                    /**
                     * 判断参数 AliasName 是否已赋值
                     * @return AliasName 是否已赋值
                     */
                    bool AliasNameHasBeenSet() const;

                    /**
                     * 获取主机Uuid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uuid 主机Uuid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置主机Uuid
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Uuid 主机Uuid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取检测中状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxStatus 检测中状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetMaxStatus() const;

                    /**
                     * 设置检测中状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MaxStatus 检测中状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMaxStatus(const uint64_t& _maxStatus);

                    /**
                     * 判断参数 MaxStatus 是否已赋值
                     * @return MaxStatus 是否已赋值
                     */
                    bool MaxStatusHasBeenSet() const;

                private:

                    /**
                     * 通过项
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_passCount;
                    bool m_passCountHasBeenSet;

                    /**
                     * 风险项
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_failCount;
                    bool m_failCountHasBeenSet;

                    /**
                     * 首次检测事件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_firstScanTime;
                    bool m_firstScanTimeHasBeenSet;

                    /**
                     * 最后检测时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastScanTime;
                    bool m_lastScanTimeHasBeenSet;

                    /**
                     * 处理状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 主机Quuid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 主机IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * 主机别名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_aliasName;
                    bool m_aliasNameHasBeenSet;

                    /**
                     * 主机Uuid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 检测中状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_maxStatus;
                    bool m_maxStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEEFFECTHOST_H_
