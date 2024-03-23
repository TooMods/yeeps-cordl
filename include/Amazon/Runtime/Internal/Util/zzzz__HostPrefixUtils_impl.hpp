#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__HostPrefixUtils_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Regex_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::HostPrefixUtils.IsValidLabelValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::Amazon::Runtime::Internal::Util::HostPrefixUtils::IsValidLabelValue)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2439fbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::HostPrefixUtils*>::get(), "IsValidLabelValue",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::Runtime::Internal::Util::HostPrefixUtils::setStaticF_labelValidationRegex(::System::Text::RegularExpressions::Regex* value) {
  ::cordl_internals::setStaticField<::System::Text::RegularExpressions::Regex*, "labelValidationRegex",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::HostPrefixUtils*>::get>(
      std::forward<::System::Text::RegularExpressions::Regex*>(value));
}
inline ::System::Text::RegularExpressions::Regex* Amazon::Runtime::Internal::Util::HostPrefixUtils::getStaticF_labelValidationRegex() {
  return ::cordl_internals::getStaticField<::System::Text::RegularExpressions::Regex*, "labelValidationRegex",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::HostPrefixUtils*>::get>();
}
inline bool Amazon::Runtime::Internal::Util::HostPrefixUtils::IsValidLabelValue(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::HostPrefixUtils*>::get(), "IsValidLabelValue",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Util::HostPrefixUtils::HostPrefixUtils() {}
