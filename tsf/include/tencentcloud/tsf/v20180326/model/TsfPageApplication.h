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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_TSFPAGEAPPLICATION_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_TSFPAGEAPPLICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/ApplicationForPage.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 应用分页信息
                */
                class TsfPageApplication : public AbstractModel
                {
                public:
                    TsfPageApplication();
                    ~TsfPageApplication() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取应用总数目
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 应用总数目
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置应用总数目
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TotalCount 应用总数目
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取应用信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Content 应用信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ApplicationForPage> GetContent() const;

                    /**
                     * 设置应用信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Content 应用信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetContent(const std::vector<ApplicationForPage>& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * 应用总数目
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 应用信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ApplicationForPage> m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_TSFPAGEAPPLICATION_H_
