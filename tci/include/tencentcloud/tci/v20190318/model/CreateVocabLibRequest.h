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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_CREATEVOCABLIBREQUEST_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_CREATEVOCABLIBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * CreateVocabLib请求参数结构体
                */
                class CreateVocabLibRequest : public AbstractModel
                {
                public:
                    CreateVocabLibRequest();
                    ~CreateVocabLibRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取词汇库名称
                     * @return VocabLibName 词汇库名称
                     */
                    std::string GetVocabLibName() const;

                    /**
                     * 设置词汇库名称
                     * @param VocabLibName 词汇库名称
                     */
                    void SetVocabLibName(const std::string& _vocabLibName);

                    /**
                     * 判断参数 VocabLibName 是否已赋值
                     * @return VocabLibName 是否已赋值
                     */
                    bool VocabLibNameHasBeenSet() const;

                private:

                    /**
                     * 词汇库名称
                     */
                    std::string m_vocabLibName;
                    bool m_vocabLibNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_CREATEVOCABLIBREQUEST_H_
