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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_APPLICATIONATTRIBUTE_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_APPLICATIONATTRIBUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 应用列表其它字段
                */
                class ApplicationAttribute : public AbstractModel
                {
                public:
                    ApplicationAttribute();
                    ~ApplicationAttribute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总实例个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceCount 总实例个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetInstanceCount() const;

                    /**
                     * 设置总实例个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InstanceCount 总实例个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInstanceCount(const int64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取运行实例个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunInstanceCount 运行实例个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetRunInstanceCount() const;

                    /**
                     * 设置运行实例个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RunInstanceCount 运行实例个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRunInstanceCount(const int64_t& _runInstanceCount);

                    /**
                     * 判断参数 RunInstanceCount 是否已赋值
                     * @return RunInstanceCount 是否已赋值
                     */
                    bool RunInstanceCountHasBeenSet() const;

                    /**
                     * 获取应用下部署组个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupCount 应用下部署组个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetGroupCount() const;

                    /**
                     * 设置应用下部署组个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param GroupCount 应用下部署组个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGroupCount(const int64_t& _groupCount);

                    /**
                     * 判断参数 GroupCount 是否已赋值
                     * @return GroupCount 是否已赋值
                     */
                    bool GroupCountHasBeenSet() const;

                private:

                    /**
                     * 总实例个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * 运行实例个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_runInstanceCount;
                    bool m_runInstanceCountHasBeenSet;

                    /**
                     * 应用下部署组个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_groupCount;
                    bool m_groupCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_APPLICATIONATTRIBUTE_H_
