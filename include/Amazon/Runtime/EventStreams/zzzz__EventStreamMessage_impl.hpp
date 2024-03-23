#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/EventStreams/zzzz__EventStreamMessage_def.hpp"
#include "Amazon/Runtime/EventStreams/zzzz__IEventStreamHeader_def.hpp"
#include "Amazon/Runtime/EventStreams/zzzz__IEventStreamMessage_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::EventStreams::EventStreamMessage.get_Headers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::EventStreams::IEventStreamHeader*>* (
    ::Amazon::Runtime::EventStreams::EventStreamMessage::*)()>(&::Amazon::Runtime::EventStreams::EventStreamMessage::get_Headers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2023d1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::EventStreamMessage*>::get(),
                                                                               "get_Headers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::EventStreams::EventStreamMessage.set_Headers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::EventStreams::EventStreamMessage::*)(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::EventStreams::IEventStreamHeader*>*)>(&::Amazon::Runtime::EventStreams::EventStreamMessage::set_Headers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2023d24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::EventStreamMessage*>::get(), "set_Headers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::EventStreams::IEventStreamHeader*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::EventStreams::EventStreamMessage.get_Payload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Amazon::Runtime::EventStreams::EventStreamMessage::*)()>(
    &::Amazon::Runtime::EventStreams::EventStreamMessage::get_Payload)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2023d2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::EventStreamMessage*>::get(),
                                                                               "get_Payload", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::EventStreams::EventStreamMessage.set_Payload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::EventStreams::EventStreamMessage::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Amazon::Runtime::EventStreams::EventStreamMessage::set_Payload)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2023d34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::EventStreamMessage*>::get(), "set_Payload", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::EventStreams::EventStreamMessage._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::EventStreams::EventStreamMessage::*)()>(
    &::Amazon::Runtime::EventStreams::EventStreamMessage::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2023d3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::EventStreamMessage*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::EventStreams::EventStreamMessage._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::EventStreams::EventStreamMessage::*)(
    ::System::Collections::Generic::List_1<::Amazon::Runtime::EventStreams::IEventStreamHeader*>*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Amazon::Runtime::EventStreams::EventStreamMessage::_ctor)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x2023d44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::EventStreamMessage*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::Runtime::EventStreams::IEventStreamHeader*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::EventStreams::EventStreamMessage.FromBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::EventStreams::EventStreamMessage* (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::Amazon::Runtime::EventStreams::EventStreamMessage::FromBuffer)> {
  constexpr static std::size_t size = 0x9a4;
  constexpr static std::size_t addrs = 0x2024024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::EventStreamMessage*>::get(), "FromBuffer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::EventStreams::EventStreamMessage.ToByteArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Amazon::Runtime::EventStreams::EventStreamMessage::*)()>(
    &::Amazon::Runtime::EventStreams::EventStreamMessage::ToByteArray)> {
  constexpr static std::size_t size = 0x898;
  constexpr static std::size_t addrs = 0x20249c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::EventStreamMessage*>::get(),
                                                                               "ToByteArray", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::Runtime::EventStreams::IEventStreamMessage"
constexpr Amazon::Runtime::EventStreams::EventStreamMessage::operator ::Amazon::Runtime::EventStreams::IEventStreamMessage*() noexcept {
  return static_cast<::Amazon::Runtime::EventStreams::IEventStreamMessage*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::EventStreams::IEventStreamMessage"
constexpr ::Amazon::Runtime::EventStreams::IEventStreamMessage* Amazon::Runtime::EventStreams::EventStreamMessage::i___Amazon__Runtime__EventStreams__IEventStreamMessage() noexcept {
  return static_cast<::Amazon::Runtime::EventStreams::IEventStreamMessage*>(static_cast<void*>(this));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::EventStreams::IEventStreamHeader*>*&
Amazon::Runtime::EventStreams::EventStreamMessage::__cordl_internal_get__Headers_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Headers_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::EventStreams::IEventStreamHeader*>*> const&
Amazon::Runtime::EventStreams::EventStreamMessage::__cordl_internal_get__Headers_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Headers_k__BackingField;
}
constexpr void Amazon::Runtime::EventStreams::EventStreamMessage::__cordl_internal_set__Headers_k__BackingField(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::EventStreams::IEventStreamHeader*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Headers_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Amazon::Runtime::EventStreams::EventStreamMessage::__cordl_internal_get__Payload_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Payload_k__BackingField;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Amazon::Runtime::EventStreams::EventStreamMessage::__cordl_internal_get__Payload_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Payload_k__BackingField;
}
constexpr void Amazon::Runtime::EventStreams::EventStreamMessage::__cordl_internal_set__Payload_k__BackingField(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Payload_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::EventStreams::IEventStreamHeader*>* Amazon::Runtime::EventStreams::EventStreamMessage::get_Headers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::EventStreamMessage*>::get(),
                                                                             "get_Headers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::EventStreams::IEventStreamHeader*>*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::EventStreams::EventStreamMessage::set_Headers(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::EventStreams::IEventStreamHeader*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::EventStreamMessage*>::get(), "set_Headers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::EventStreams::IEventStreamHeader*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Amazon::Runtime::EventStreams::EventStreamMessage::get_Payload() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::EventStreamMessage*>::get(),
                                                                             "get_Payload", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline void Amazon::Runtime::EventStreams::EventStreamMessage::set_Payload(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::EventStreamMessage*>::get(), "set_Payload", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::EventStreams::EventStreamMessage* Amazon::Runtime::EventStreams::EventStreamMessage::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::EventStreams::EventStreamMessage*>());
}
inline void Amazon::Runtime::EventStreams::EventStreamMessage::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::EventStreamMessage*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::EventStreams::EventStreamMessage*
Amazon::Runtime::EventStreams::EventStreamMessage::New_ctor(::System::Collections::Generic::List_1<::Amazon::Runtime::EventStreams::IEventStreamHeader*>* headers,
                                                            ::ArrayW<uint8_t, ::Array<uint8_t>*> payload) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::EventStreams::EventStreamMessage*>(headers, payload));
}
inline void Amazon::Runtime::EventStreams::EventStreamMessage::_ctor(::System::Collections::Generic::List_1<::Amazon::Runtime::EventStreams::IEventStreamHeader*>* headers,
                                                                     ::ArrayW<uint8_t, ::Array<uint8_t>*> payload) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::EventStreamMessage*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::Runtime::EventStreams::IEventStreamHeader*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, headers, payload);
}
inline ::Amazon::Runtime::EventStreams::EventStreamMessage* Amazon::Runtime::EventStreams::EventStreamMessage::FromBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::EventStreamMessage*>::get(), "FromBuffer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::EventStreams::EventStreamMessage*, false>(nullptr, ___internal_method, buffer, offset, length);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Amazon::Runtime::EventStreams::EventStreamMessage::ToByteArray() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::EventStreamMessage*>::get(),
                                                                             "ToByteArray", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::EventStreams::EventStreamMessage::EventStreamMessage() {}
