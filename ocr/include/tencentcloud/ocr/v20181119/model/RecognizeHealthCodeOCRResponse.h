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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEHEALTHCODEOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEHEALTHCODEOCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * RecognizeHealthCodeOCR返回参数结构体
                */
                class RecognizeHealthCodeOCRResponse : public AbstractModel
                {
                public:
                    RecognizeHealthCodeOCRResponse();
                    ~RecognizeHealthCodeOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取持码人姓名
                     * @return Name 持码人姓名
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取健康码更新时间，格式为：XXXX-XX-XX XX:XX:XX
                     * @return Time 健康码更新时间，格式为：XXXX-XX-XX XX:XX:XX
                     */
                    std::string GetTime() const;

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取健康码颜色：绿色、黄色、红色
                     * @return Color 健康码颜色：绿色、黄色、红色
                     */
                    std::string GetColor() const;

                    /**
                     * 判断参数 Color 是否已赋值
                     * @return Color 是否已赋值
                     */
                    bool ColorHasBeenSet() const;

                private:

                    /**
                     * 持码人姓名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 健康码更新时间，格式为：XXXX-XX-XX XX:XX:XX
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 健康码颜色：绿色、黄色、红色
                     */
                    std::string m_color;
                    bool m_colorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEHEALTHCODEOCRRESPONSE_H_
