#pragma once
#include "Unity/Services/Vivox/zzzz__ITextMessage_def.hpp"
#include "System/ComponentModel/zzzz__INotifyPropertyChanged_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "Unity/Services/Vivox/zzzz__IKeyedItemNotifyPropertyChanged_1_def.hpp"
//  Writing Method size for method: ::Unity::Services::Vivox::ITextMessage.get_ReceivedTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::Unity::Services::Vivox::ITextMessage::*)()>(
    &::Unity::Services::Vivox::ITextMessage::get_ReceivedTime)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ITextMessage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ITextMessage*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ITextMessage.get_Message
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Vivox::ITextMessage::*)()>(&::Unity::Services::Vivox::ITextMessage::get_Message)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ITextMessage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ITextMessage*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ITextMessage.get_Language
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Vivox::ITextMessage::*)()>(&::Unity::Services::Vivox::ITextMessage::get_Language)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ITextMessage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ITextMessage*>::get(), 2));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>"
constexpr Unity::Services::Vivox::ITextMessage::operator ::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>*() noexcept {
  return static_cast<::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>"
constexpr ::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>*
Unity::Services::Vivox::ITextMessage::i___Unity__Services__Vivox__IKeyedItemNotifyPropertyChanged_1___StringW_() noexcept {
  return static_cast<::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ComponentModel::INotifyPropertyChanged"
constexpr Unity::Services::Vivox::ITextMessage::operator ::System::ComponentModel::INotifyPropertyChanged*() noexcept {
  return static_cast<::System::ComponentModel::INotifyPropertyChanged*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ComponentModel::INotifyPropertyChanged"
constexpr ::System::ComponentModel::INotifyPropertyChanged* Unity::Services::Vivox::ITextMessage::i___System__ComponentModel__INotifyPropertyChanged() noexcept {
  return static_cast<::System::ComponentModel::INotifyPropertyChanged*>(static_cast<void*>(this));
}
inline ::System::DateTime Unity::Services::Vivox::ITextMessage::get_ReceivedTime() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ITextMessage*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline ::StringW Unity::Services::Vivox::ITextMessage::get_Message() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ITextMessage*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Unity::Services::Vivox::ITextMessage::get_Language() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ITextMessage*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
