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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_TSFPAGENAMESPACE_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_TSFPAGENAMESPACE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/Namespace.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * Tsf命名空间分页对象
                */
                class TsfPageNamespace : public AbstractModel
                {
                public:
                    TsfPageNamespace();
                    ~TsfPageNamespace() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取命名空间总条数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 命名空间总条数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置命名空间总条数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TotalCount 命名空间总条数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取命名空间列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Content 命名空间列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Namespace> GetContent() const;

                    /**
                     * 设置命名空间列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Content 命名空间列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetContent(const std::vector<Namespace>& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * 命名空间总条数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 命名空间列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Namespace> m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_TSFPAGENAMESPACE_H_
