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

#ifndef TENCENTCLOUD_TIIA_V20190529_MODEL_CARTAGITEM_H_
#define TENCENTCLOUD_TIIA_V20190529_MODEL_CARTAGITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiia
    {
        namespace V20190529
        {
            namespace Model
            {
                /**
                * 车辆属性识别的结果
                */
                class CarTagItem : public AbstractModel
                {
                public:
                    CarTagItem();
                    ~CarTagItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取车系
                     * @return Serial 车系
                     */
                    std::string GetSerial() const;

                    /**
                     * 设置车系
                     * @param Serial 车系
                     */
                    void SetSerial(const std::string& _serial);

                    /**
                     * 判断参数 Serial 是否已赋值
                     * @return Serial 是否已赋值
                     */
                    bool SerialHasBeenSet() const;

                    /**
                     * 获取车辆品牌
                     * @return Brand 车辆品牌
                     */
                    std::string GetBrand() const;

                    /**
                     * 设置车辆品牌
                     * @param Brand 车辆品牌
                     */
                    void SetBrand(const std::string& _brand);

                    /**
                     * 判断参数 Brand 是否已赋值
                     * @return Brand 是否已赋值
                     */
                    bool BrandHasBeenSet() const;

                    /**
                     * 获取车辆类型
                     * @return Type 车辆类型
                     */
                    std::string GetType() const;

                    /**
                     * 设置车辆类型
                     * @param Type 车辆类型
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取车辆颜色
                     * @return Color 车辆颜色
                     */
                    std::string GetColor() const;

                    /**
                     * 设置车辆颜色
                     * @param Color 车辆颜色
                     */
                    void SetColor(const std::string& _color);

                    /**
                     * 判断参数 Color 是否已赋值
                     * @return Color 是否已赋值
                     */
                    bool ColorHasBeenSet() const;

                    /**
                     * 获取置信度，0-100
                     * @return Confidence 置信度，0-100
                     */
                    int64_t GetConfidence() const;

                    /**
                     * 设置置信度，0-100
                     * @param Confidence 置信度，0-100
                     */
                    void SetConfidence(const int64_t& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取年份，没识别出年份的时候返回0
                     * @return Year 年份，没识别出年份的时候返回0
                     */
                    int64_t GetYear() const;

                    /**
                     * 设置年份，没识别出年份的时候返回0
                     * @param Year 年份，没识别出年份的时候返回0
                     */
                    void SetYear(const int64_t& _year);

                    /**
                     * 判断参数 Year 是否已赋值
                     * @return Year 是否已赋值
                     */
                    bool YearHasBeenSet() const;

                private:

                    /**
                     * 车系
                     */
                    std::string m_serial;
                    bool m_serialHasBeenSet;

                    /**
                     * 车辆品牌
                     */
                    std::string m_brand;
                    bool m_brandHasBeenSet;

                    /**
                     * 车辆类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 车辆颜色
                     */
                    std::string m_color;
                    bool m_colorHasBeenSet;

                    /**
                     * 置信度，0-100
                     */
                    int64_t m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 年份，没识别出年份的时候返回0
                     */
                    int64_t m_year;
                    bool m_yearHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIIA_V20190529_MODEL_CARTAGITEM_H_
