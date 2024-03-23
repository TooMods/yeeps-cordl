#pragma once
#include "Amazon/Runtime/Internal/zzzz__ResponseContext_impl.hpp"
#include "Amazon/Runtime/Internal/zzzz__AsyncResponseContext_def.hpp"
#include "Amazon/Runtime/zzzz__IAsyncResponseContext_def.hpp"
#include "Amazon/Runtime/zzzz__IResponseContext_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::AsyncResponseContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::AsyncResponseContext::*)()>(
    &::Amazon::Runtime::Internal::AsyncResponseContext::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dcda0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AsyncResponseContext*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::Runtime::IAsyncResponseContext"
constexpr Amazon::Runtime::Internal::AsyncResponseContext::operator ::Amazon::Runtime::IAsyncResponseContext*() noexcept {
  return static_cast<::Amazon::Runtime::IAsyncResponseContext*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::IAsyncResponseContext"
constexpr ::Amazon::Runtime::IAsyncResponseContext* Amazon::Runtime::Internal::AsyncResponseContext::i___Amazon__Runtime__IAsyncResponseContext() noexcept {
  return static_cast<::Amazon::Runtime::IAsyncResponseContext*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Amazon::Runtime::IResponseContext"
constexpr Amazon::Runtime::Internal::AsyncResponseContext::operator ::Amazon::Runtime::IResponseContext*() noexcept {
  return static_cast<::Amazon::Runtime::IResponseContext*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::IResponseContext"
constexpr ::Amazon::Runtime::IResponseContext* Amazon::Runtime::Internal::AsyncResponseContext::i___Amazon__Runtime__IResponseContext() noexcept {
  return static_cast<::Amazon::Runtime::IResponseContext*>(static_cast<void*>(this));
}
inline ::Amazon::Runtime::Internal::AsyncResponseContext* Amazon::Runtime::Internal::AsyncResponseContext::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::AsyncResponseContext*>());
}
inline void Amazon::Runtime::Internal::AsyncResponseContext::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AsyncResponseContext*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::AsyncResponseContext::AsyncResponseContext() {}
