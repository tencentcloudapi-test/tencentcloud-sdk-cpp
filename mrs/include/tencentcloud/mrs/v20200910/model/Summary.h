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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_SUMMARY_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_SUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/SymptomInfo.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 结论
                */
                class Summary : public AbstractModel
                {
                public:
                    Summary();
                    ~Summary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取症状
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Symptom 症状
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SymptomInfo> GetSymptom() const;

                    /**
                     * 设置症状
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Symptom 症状
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSymptom(const std::vector<SymptomInfo>& _symptom);

                    /**
                     * 判断参数 Symptom 是否已赋值
                     * @return Symptom 是否已赋值
                     */
                    bool SymptomHasBeenSet() const;

                    /**
                     * 获取文本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Text 文本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetText() const;

                    /**
                     * 设置文本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Text 文本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     */
                    bool TextHasBeenSet() const;

                private:

                    /**
                     * 症状
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SymptomInfo> m_symptom;
                    bool m_symptomHasBeenSet;

                    /**
                     * 文本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_SUMMARY_H_
