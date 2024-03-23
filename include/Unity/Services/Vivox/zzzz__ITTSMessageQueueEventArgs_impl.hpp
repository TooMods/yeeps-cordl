#pragma once
#include "System/zzzz__EventArgs_impl.hpp"
#include "Unity/Services/Vivox/zzzz__ITTSMessageQueueEventArgs_def.hpp"
#include "Unity/Services/Vivox/zzzz__TTSMessage_def.hpp"
//  Writing Method size for method: ::Unity::Services::Vivox::ITTSMessageQueueEventArgs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::ITTSMessageQueueEventArgs::*)(::Unity::Services::Vivox::TTSMessage*)>(
    &::Unity::Services::Vivox::ITTSMessageQueueEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2fc7468;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ITTSMessageQueueEventArgs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::TTSMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ITTSMessageQueueEventArgs.get_Message
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::TTSMessage* (::Unity::Services::Vivox::ITTSMessageQueueEventArgs::*)()>(
    &::Unity::Services::Vivox::ITTSMessageQueueEventArgs::get_Message)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fc74d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ITTSMessageQueueEventArgs*>::get(),
                                                                               "get_Message", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Unity::Services::Vivox::TTSMessage*& Unity::Services::Vivox::ITTSMessageQueueEventArgs::__cordl_internal_get__Message_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Message_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::TTSMessage*> const& Unity::Services::Vivox::ITTSMessageQueueEventArgs::__cordl_internal_get__Message_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Message_k__BackingField;
}
constexpr void Unity::Services::Vivox::ITTSMessageQueueEventArgs::__cordl_internal_set__Message_k__BackingField(::Unity::Services::Vivox::TTSMessage* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Message_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Unity::Services::Vivox::ITTSMessageQueueEventArgs* Unity::Services::Vivox::ITTSMessageQueueEventArgs::New_ctor(::Unity::Services::Vivox::TTSMessage* message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::ITTSMessageQueueEventArgs*>(message));
}
inline void Unity::Services::Vivox::ITTSMessageQueueEventArgs::_ctor(::Unity::Services::Vivox::TTSMessage* message) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ITTSMessageQueueEventArgs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::TTSMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline ::Unity::Services::Vivox::TTSMessage* Unity::Services::Vivox::ITTSMessageQueueEventArgs::get_Message() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ITTSMessageQueueEventArgs*>::get(),
                                                                             "get_Message", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::TTSMessage*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::ITTSMessageQueueEventArgs::ITTSMessageQueueEventArgs() {}
