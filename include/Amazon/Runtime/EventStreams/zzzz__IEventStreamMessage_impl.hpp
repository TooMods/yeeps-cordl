#pragma once
#include "Amazon/Runtime/EventStreams/zzzz__IEventStreamMessage_def.hpp"
#include "Amazon/Runtime/EventStreams/zzzz__IEventStreamHeader_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::EventStreams::IEventStreamMessage.get_Headers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::EventStreams::IEventStreamHeader*>* (
    ::Amazon::Runtime::EventStreams::IEventStreamMessage::*)()>(&::Amazon::Runtime::EventStreams::IEventStreamMessage::get_Headers)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::IEventStreamMessage*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::IEventStreamMessage*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::EventStreams::IEventStreamMessage.set_Headers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::EventStreams::IEventStreamMessage::*)(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::EventStreams::IEventStreamHeader*>*)>(&::Amazon::Runtime::EventStreams::IEventStreamMessage::set_Headers)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::IEventStreamMessage*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::IEventStreamMessage*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::EventStreams::IEventStreamMessage.get_Payload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Amazon::Runtime::EventStreams::IEventStreamMessage::*)()>(
    &::Amazon::Runtime::EventStreams::IEventStreamMessage::get_Payload)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::IEventStreamMessage*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::IEventStreamMessage*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::EventStreams::IEventStreamMessage.set_Payload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::EventStreams::IEventStreamMessage::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Amazon::Runtime::EventStreams::IEventStreamMessage::set_Payload)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::IEventStreamMessage*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::IEventStreamMessage*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::EventStreams::IEventStreamMessage.ToByteArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Amazon::Runtime::EventStreams::IEventStreamMessage::*)()>(
    &::Amazon::Runtime::EventStreams::IEventStreamMessage::ToByteArray)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::IEventStreamMessage*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::IEventStreamMessage*>::get(), 4));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::EventStreams::IEventStreamHeader*>* Amazon::Runtime::EventStreams::IEventStreamMessage::get_Headers() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::IEventStreamMessage*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::EventStreams::IEventStreamHeader*>*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::EventStreams::IEventStreamMessage::set_Headers(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::EventStreams::IEventStreamHeader*>* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::IEventStreamMessage*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Amazon::Runtime::EventStreams::IEventStreamMessage::get_Payload() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::IEventStreamMessage*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline void Amazon::Runtime::EventStreams::IEventStreamMessage::set_Payload(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::IEventStreamMessage*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Amazon::Runtime::EventStreams::IEventStreamMessage::ToByteArray() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::IEventStreamMessage*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
