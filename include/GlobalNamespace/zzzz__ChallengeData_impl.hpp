#pragma once
#include "GlobalNamespace/zzzz__ChallengeData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ChallengeData.GetDisplayMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::ChallengeData::*)()>(&::GlobalNamespace::ChallengeData::GetDisplayMessage)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x27582f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeData>::get(), "GetDisplayMessage",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::ChallengeData::GetDisplayMessage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeData>::get(), "GetDisplayMessage",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "statKey", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "threshold", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ChallengeData::ChallengeData(::StringW key, ::StringW message, ::StringW statKey, int32_t threshold) noexcept {
  this->key = key;
  this->message = message;
  this->statKey = statKey;
  this->threshold = threshold;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ChallengeData::ChallengeData() {}
