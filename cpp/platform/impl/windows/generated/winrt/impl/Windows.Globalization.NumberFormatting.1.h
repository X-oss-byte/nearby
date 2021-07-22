// Copyright 2020 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210505.3

#ifndef WINRT_Windows_Globalization_NumberFormatting_1_H
#define WINRT_Windows_Globalization_NumberFormatting_1_H
#include "winrt/impl/Windows.Globalization.NumberFormatting.0.h"
WINRT_EXPORT namespace winrt::Windows::Globalization::NumberFormatting
{
    struct __declspec(empty_bases) ICurrencyFormatter :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICurrencyFormatter>,
        impl::require<winrt::Windows::Globalization::NumberFormatting::ICurrencyFormatter, winrt::Windows::Globalization::NumberFormatting::INumberFormatterOptions, winrt::Windows::Globalization::NumberFormatting::INumberFormatter, winrt::Windows::Globalization::NumberFormatting::INumberFormatter2, winrt::Windows::Globalization::NumberFormatting::INumberParser>
    {
        ICurrencyFormatter(std::nullptr_t = nullptr) noexcept {}
        ICurrencyFormatter(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ICurrencyFormatter(ICurrencyFormatter const&) noexcept = default;
        ICurrencyFormatter(ICurrencyFormatter&&) noexcept = default;
        ICurrencyFormatter& operator=(ICurrencyFormatter const&) & noexcept = default;
        ICurrencyFormatter& operator=(ICurrencyFormatter&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ICurrencyFormatter2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICurrencyFormatter2>
    {
        ICurrencyFormatter2(std::nullptr_t = nullptr) noexcept {}
        ICurrencyFormatter2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ICurrencyFormatter2(ICurrencyFormatter2 const&) noexcept = default;
        ICurrencyFormatter2(ICurrencyFormatter2&&) noexcept = default;
        ICurrencyFormatter2& operator=(ICurrencyFormatter2 const&) & noexcept = default;
        ICurrencyFormatter2& operator=(ICurrencyFormatter2&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ICurrencyFormatterFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICurrencyFormatterFactory>
    {
        ICurrencyFormatterFactory(std::nullptr_t = nullptr) noexcept {}
        ICurrencyFormatterFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ICurrencyFormatterFactory(ICurrencyFormatterFactory const&) noexcept = default;
        ICurrencyFormatterFactory(ICurrencyFormatterFactory&&) noexcept = default;
        ICurrencyFormatterFactory& operator=(ICurrencyFormatterFactory const&) & noexcept = default;
        ICurrencyFormatterFactory& operator=(ICurrencyFormatterFactory&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IDecimalFormatterFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IDecimalFormatterFactory>
    {
        IDecimalFormatterFactory(std::nullptr_t = nullptr) noexcept {}
        IDecimalFormatterFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IDecimalFormatterFactory(IDecimalFormatterFactory const&) noexcept = default;
        IDecimalFormatterFactory(IDecimalFormatterFactory&&) noexcept = default;
        IDecimalFormatterFactory& operator=(IDecimalFormatterFactory const&) & noexcept = default;
        IDecimalFormatterFactory& operator=(IDecimalFormatterFactory&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IIncrementNumberRounder :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IIncrementNumberRounder>
    {
        IIncrementNumberRounder(std::nullptr_t = nullptr) noexcept {}
        IIncrementNumberRounder(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IIncrementNumberRounder(IIncrementNumberRounder const&) noexcept = default;
        IIncrementNumberRounder(IIncrementNumberRounder&&) noexcept = default;
        IIncrementNumberRounder& operator=(IIncrementNumberRounder const&) & noexcept = default;
        IIncrementNumberRounder& operator=(IIncrementNumberRounder&&) & noexcept = default;
    };
    struct __declspec(empty_bases) INumberFormatter :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<INumberFormatter>
    {
        INumberFormatter(std::nullptr_t = nullptr) noexcept {}
        INumberFormatter(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        INumberFormatter(INumberFormatter const&) noexcept = default;
        INumberFormatter(INumberFormatter&&) noexcept = default;
        INumberFormatter& operator=(INumberFormatter const&) & noexcept = default;
        INumberFormatter& operator=(INumberFormatter&&) & noexcept = default;
    };
    struct __declspec(empty_bases) INumberFormatter2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<INumberFormatter2>
    {
        INumberFormatter2(std::nullptr_t = nullptr) noexcept {}
        INumberFormatter2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        INumberFormatter2(INumberFormatter2 const&) noexcept = default;
        INumberFormatter2(INumberFormatter2&&) noexcept = default;
        INumberFormatter2& operator=(INumberFormatter2 const&) & noexcept = default;
        INumberFormatter2& operator=(INumberFormatter2&&) & noexcept = default;
    };
    struct __declspec(empty_bases) INumberFormatterOptions :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<INumberFormatterOptions>
    {
        INumberFormatterOptions(std::nullptr_t = nullptr) noexcept {}
        INumberFormatterOptions(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        INumberFormatterOptions(INumberFormatterOptions const&) noexcept = default;
        INumberFormatterOptions(INumberFormatterOptions&&) noexcept = default;
        INumberFormatterOptions& operator=(INumberFormatterOptions const&) & noexcept = default;
        INumberFormatterOptions& operator=(INumberFormatterOptions&&) & noexcept = default;
    };
    struct __declspec(empty_bases) INumberParser :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<INumberParser>
    {
        INumberParser(std::nullptr_t = nullptr) noexcept {}
        INumberParser(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        INumberParser(INumberParser const&) noexcept = default;
        INumberParser(INumberParser&&) noexcept = default;
        INumberParser& operator=(INumberParser const&) & noexcept = default;
        INumberParser& operator=(INumberParser&&) & noexcept = default;
    };
    struct __declspec(empty_bases) INumberRounder :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<INumberRounder>
    {
        INumberRounder(std::nullptr_t = nullptr) noexcept {}
        INumberRounder(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        INumberRounder(INumberRounder const&) noexcept = default;
        INumberRounder(INumberRounder&&) noexcept = default;
        INumberRounder& operator=(INumberRounder const&) & noexcept = default;
        INumberRounder& operator=(INumberRounder&&) & noexcept = default;
    };
    struct __declspec(empty_bases) INumberRounderOption :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<INumberRounderOption>
    {
        INumberRounderOption(std::nullptr_t = nullptr) noexcept {}
        INumberRounderOption(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        INumberRounderOption(INumberRounderOption const&) noexcept = default;
        INumberRounderOption(INumberRounderOption&&) noexcept = default;
        INumberRounderOption& operator=(INumberRounderOption const&) & noexcept = default;
        INumberRounderOption& operator=(INumberRounderOption&&) & noexcept = default;
    };
    struct __declspec(empty_bases) INumeralSystemTranslator :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<INumeralSystemTranslator>
    {
        INumeralSystemTranslator(std::nullptr_t = nullptr) noexcept {}
        INumeralSystemTranslator(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        INumeralSystemTranslator(INumeralSystemTranslator const&) noexcept = default;
        INumeralSystemTranslator(INumeralSystemTranslator&&) noexcept = default;
        INumeralSystemTranslator& operator=(INumeralSystemTranslator const&) & noexcept = default;
        INumeralSystemTranslator& operator=(INumeralSystemTranslator&&) & noexcept = default;
    };
    struct __declspec(empty_bases) INumeralSystemTranslatorFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<INumeralSystemTranslatorFactory>
    {
        INumeralSystemTranslatorFactory(std::nullptr_t = nullptr) noexcept {}
        INumeralSystemTranslatorFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        INumeralSystemTranslatorFactory(INumeralSystemTranslatorFactory const&) noexcept = default;
        INumeralSystemTranslatorFactory(INumeralSystemTranslatorFactory&&) noexcept = default;
        INumeralSystemTranslatorFactory& operator=(INumeralSystemTranslatorFactory const&) & noexcept = default;
        INumeralSystemTranslatorFactory& operator=(INumeralSystemTranslatorFactory&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IPercentFormatterFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPercentFormatterFactory>
    {
        IPercentFormatterFactory(std::nullptr_t = nullptr) noexcept {}
        IPercentFormatterFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IPercentFormatterFactory(IPercentFormatterFactory const&) noexcept = default;
        IPercentFormatterFactory(IPercentFormatterFactory&&) noexcept = default;
        IPercentFormatterFactory& operator=(IPercentFormatterFactory const&) & noexcept = default;
        IPercentFormatterFactory& operator=(IPercentFormatterFactory&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IPermilleFormatterFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPermilleFormatterFactory>
    {
        IPermilleFormatterFactory(std::nullptr_t = nullptr) noexcept {}
        IPermilleFormatterFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IPermilleFormatterFactory(IPermilleFormatterFactory const&) noexcept = default;
        IPermilleFormatterFactory(IPermilleFormatterFactory&&) noexcept = default;
        IPermilleFormatterFactory& operator=(IPermilleFormatterFactory const&) & noexcept = default;
        IPermilleFormatterFactory& operator=(IPermilleFormatterFactory&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ISignedZeroOption :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISignedZeroOption>
    {
        ISignedZeroOption(std::nullptr_t = nullptr) noexcept {}
        ISignedZeroOption(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ISignedZeroOption(ISignedZeroOption const&) noexcept = default;
        ISignedZeroOption(ISignedZeroOption&&) noexcept = default;
        ISignedZeroOption& operator=(ISignedZeroOption const&) & noexcept = default;
        ISignedZeroOption& operator=(ISignedZeroOption&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ISignificantDigitsNumberRounder :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISignificantDigitsNumberRounder>
    {
        ISignificantDigitsNumberRounder(std::nullptr_t = nullptr) noexcept {}
        ISignificantDigitsNumberRounder(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ISignificantDigitsNumberRounder(ISignificantDigitsNumberRounder const&) noexcept = default;
        ISignificantDigitsNumberRounder(ISignificantDigitsNumberRounder&&) noexcept = default;
        ISignificantDigitsNumberRounder& operator=(ISignificantDigitsNumberRounder const&) & noexcept = default;
        ISignificantDigitsNumberRounder& operator=(ISignificantDigitsNumberRounder&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ISignificantDigitsOption :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISignificantDigitsOption>
    {
        ISignificantDigitsOption(std::nullptr_t = nullptr) noexcept {}
        ISignificantDigitsOption(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ISignificantDigitsOption(ISignificantDigitsOption const&) noexcept = default;
        ISignificantDigitsOption(ISignificantDigitsOption&&) noexcept = default;
        ISignificantDigitsOption& operator=(ISignificantDigitsOption const&) & noexcept = default;
        ISignificantDigitsOption& operator=(ISignificantDigitsOption&&) & noexcept = default;
    };
}
#endif