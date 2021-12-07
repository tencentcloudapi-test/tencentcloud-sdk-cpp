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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_COMPONENTSINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_COMPONENTSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 组件信息
                */
                class ComponentsInfo : public AbstractModel
                {
                public:
                    ComponentsInfo();
                    ~ComponentsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取组件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Component 组件名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetComponent() const;

                    /**
                     * 设置组件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Component 组件名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetComponent(const std::string& _component);

                    /**
                     * 判断参数 Component 是否已赋值
                     * @return Component 是否已赋值
                     */
                    bool ComponentHasBeenSet() const;

                    /**
                     * 获取组件版本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Version 组件版本信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置组件版本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Version 组件版本信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     */
                    bool VersionHasBeenSet() const;

                private:

                    /**
                     * 组件名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_component;
                    bool m_componentHasBeenSet;

                    /**
                     * 组件版本信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_COMPONENTSINFO_H_
