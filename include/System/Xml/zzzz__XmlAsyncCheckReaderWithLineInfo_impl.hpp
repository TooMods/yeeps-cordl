#pragma once
#include "System/Xml/zzzz__XmlAsyncCheckReader_impl.hpp"
#include "System/Xml/zzzz__XmlAsyncCheckReaderWithLineInfo_def.hpp"
#include "System/Xml/zzzz__IXmlLineInfo_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReaderWithLineInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlAsyncCheckReaderWithLineInfo::*)(::System::Xml::XmlReader*)>(
    &::System::Xml::XmlAsyncCheckReaderWithLineInfo::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x14cc5a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlAsyncCheckReaderWithLineInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReaderWithLineInfo.HasLineInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlAsyncCheckReaderWithLineInfo::*)()>(
    &::System::Xml::XmlAsyncCheckReaderWithLineInfo::HasLineInfo)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x14cd48c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlAsyncCheckReaderWithLineInfo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlAsyncCheckReaderWithLineInfo*>::get(), 57));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReaderWithLineInfo.get_LineNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlAsyncCheckReaderWithLineInfo::*)()>(
    &::System::Xml::XmlAsyncCheckReaderWithLineInfo::get_LineNumber)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x14cd52c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlAsyncCheckReaderWithLineInfo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlAsyncCheckReaderWithLineInfo*>::get(), 58));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReaderWithLineInfo.get_LinePosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlAsyncCheckReaderWithLineInfo::*)()>(
    &::System::Xml::XmlAsyncCheckReaderWithLineInfo::get_LinePosition)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x14cd5d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlAsyncCheckReaderWithLineInfo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlAsyncCheckReaderWithLineInfo*>::get(), 59));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Xml::IXmlLineInfo"
constexpr System::Xml::XmlAsyncCheckReaderWithLineInfo::operator ::System::Xml::IXmlLineInfo*() noexcept {
  return static_cast<::System::Xml::IXmlLineInfo*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Xml::IXmlLineInfo"
constexpr ::System::Xml::IXmlLineInfo* System::Xml::XmlAsyncCheckReaderWithLineInfo::i___System__Xml__IXmlLineInfo() noexcept {
  return static_cast<::System::Xml::IXmlLineInfo*>(static_cast<void*>(this));
}
constexpr ::System::Xml::IXmlLineInfo*& System::Xml::XmlAsyncCheckReaderWithLineInfo::__cordl_internal_get_readerAsIXmlLineInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readerAsIXmlLineInfo;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::IXmlLineInfo*> const& System::Xml::XmlAsyncCheckReaderWithLineInfo::__cordl_internal_get_readerAsIXmlLineInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readerAsIXmlLineInfo;
}
constexpr void System::Xml::XmlAsyncCheckReaderWithLineInfo::__cordl_internal_set_readerAsIXmlLineInfo(::System::Xml::IXmlLineInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___readerAsIXmlLineInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Xml::XmlAsyncCheckReaderWithLineInfo* System::Xml::XmlAsyncCheckReaderWithLineInfo::New_ctor(::System::Xml::XmlReader* reader) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlAsyncCheckReaderWithLineInfo*>(reader));
}
inline void System::Xml::XmlAsyncCheckReaderWithLineInfo::_ctor(::System::Xml::XmlReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlAsyncCheckReaderWithLineInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline bool System::Xml::XmlAsyncCheckReaderWithLineInfo::HasLineInfo() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlAsyncCheckReaderWithLineInfo*>::get(), 57)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t System::Xml::XmlAsyncCheckReaderWithLineInfo::get_LineNumber() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlAsyncCheckReaderWithLineInfo*>::get(), 58)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Xml::XmlAsyncCheckReaderWithLineInfo::get_LinePosition() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlAsyncCheckReaderWithLineInfo*>::get(), 59)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::XmlAsyncCheckReaderWithLineInfo::XmlAsyncCheckReaderWithLineInfo() {}
