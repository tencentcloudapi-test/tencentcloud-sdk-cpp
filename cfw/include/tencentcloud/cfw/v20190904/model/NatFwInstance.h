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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_NATFWINSTANCE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_NATFWINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * Nat实例类型
                */
                class NatFwInstance : public AbstractModel
                {
                public:
                    NatFwInstance();
                    ~NatFwInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取nat实例id
                     * @return NatinsId nat实例id
                     */
                    std::string GetNatinsId() const;

                    /**
                     * 设置nat实例id
                     * @param NatinsId nat实例id
                     */
                    void SetNatinsId(const std::string& _natinsId);

                    /**
                     * 判断参数 NatinsId 是否已赋值
                     * @return NatinsId 是否已赋值
                     */
                    bool NatinsIdHasBeenSet() const;

                    /**
                     * 获取nat实例名称
                     * @return NatinsName nat实例名称
                     */
                    std::string GetNatinsName() const;

                    /**
                     * 设置nat实例名称
                     * @param NatinsName nat实例名称
                     */
                    void SetNatinsName(const std::string& _natinsName);

                    /**
                     * 判断参数 NatinsName 是否已赋值
                     * @return NatinsName 是否已赋值
                     */
                    bool NatinsNameHasBeenSet() const;

                    /**
                     * 获取实例所在地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 实例所在地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置实例所在地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Region 实例所在地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取0:新增模式，1:接入模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FwMode 0:新增模式，1:接入模式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetFwMode() const;

                    /**
                     * 设置0:新增模式，1:接入模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FwMode 0:新增模式，1:接入模式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFwMode(const int64_t& _fwMode);

                    /**
                     * 判断参数 FwMode 是否已赋值
                     * @return FwMode 是否已赋值
                     */
                    bool FwModeHasBeenSet() const;

                    /**
                     * 获取0:正常状态， 1: 正在创建
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 0:正常状态， 1: 正在创建
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置0:正常状态， 1: 正在创建
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Status 0:正常状态， 1: 正在创建
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取nat公网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NatIp nat公网ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNatIp() const;

                    /**
                     * 设置nat公网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NatIp nat公网ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNatIp(const std::string& _natIp);

                    /**
                     * 判断参数 NatIp 是否已赋值
                     * @return NatIp 是否已赋值
                     */
                    bool NatIpHasBeenSet() const;

                private:

                    /**
                     * nat实例id
                     */
                    std::string m_natinsId;
                    bool m_natinsIdHasBeenSet;

                    /**
                     * nat实例名称
                     */
                    std::string m_natinsName;
                    bool m_natinsNameHasBeenSet;

                    /**
                     * 实例所在地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 0:新增模式，1:接入模式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_fwMode;
                    bool m_fwModeHasBeenSet;

                    /**
                     * 0:正常状态， 1: 正在创建
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * nat公网ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_natIp;
                    bool m_natIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_NATFWINSTANCE_H_
