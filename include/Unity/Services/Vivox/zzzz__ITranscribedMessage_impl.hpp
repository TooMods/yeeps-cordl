#pragma once
#include "Unity/Services/Vivox/zzzz__ITranscribedMessage_def.hpp"
#include "System/ComponentModel/zzzz__INotifyPropertyChanged_def.hpp"
#include "Unity/Services/Vivox/zzzz__AccountId_def.hpp"
#include "Unity/Services/Vivox/zzzz__IChannelSession_def.hpp"
#include "Unity/Services/Vivox/zzzz__IKeyedItemNotifyPropertyChanged_1_def.hpp"
#include "Unity/Services/Vivox/zzzz__ITextMessage_def.hpp"
//  Writing Method size for method: ::Unity::Services::Vivox::ITranscribedMessage.get_ChannelSession
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::IChannelSession* (::Unity::Services::Vivox::ITranscribedMessage::*)()>(
    &::Unity::Services::Vivox::ITranscribedMessage::get_ChannelSession)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ITranscribedMessage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ITranscribedMessage*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ITranscribedMessage.get_Sender
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::AccountId* (::Unity::Services::Vivox::ITranscribedMessage::*)()>(
    &::Unity::Services::Vivox::ITranscribedMessage::get_Sender)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ITranscribedMessage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ITranscribedMessage*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ITranscribedMessage.get_FromSelf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Vivox::ITranscribedMessage::*)()>(
    &::Unity::Services::Vivox::ITranscribedMessage::get_FromSelf)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ITranscribedMessage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ITranscribedMessage*>::get(), 2));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Services::Vivox::ITextMessage"
constexpr Unity::Services::Vivox::ITranscribedMessage::operator ::Unity::Services::Vivox::ITextMessage*() noexcept {
  return static_cast<::Unity::Services::Vivox::ITextMessage*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Vivox::ITextMessage"
constexpr ::Unity::Services::Vivox::ITextMessage* Unity::Services::Vivox::ITranscribedMessage::i___Unity__Services__Vivox__ITextMessage() noexcept {
  return static_cast<::Unity::Services::Vivox::ITextMessage*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>"
constexpr Unity::Services::Vivox::ITranscribedMessage::operator ::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>*() noexcept {
  return static_cast<::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>"
constexpr ::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>*
Unity::Services::Vivox::ITranscribedMessage::i___Unity__Services__Vivox__IKeyedItemNotifyPropertyChanged_1___StringW_() noexcept {
  return static_cast<::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ComponentModel::INotifyPropertyChanged"
constexpr Unity::Services::Vivox::ITranscribedMessage::operator ::System::ComponentModel::INotifyPropertyChanged*() noexcept {
  return static_cast<::System::ComponentModel::INotifyPropertyChanged*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ComponentModel::INotifyPropertyChanged"
constexpr ::System::ComponentModel::INotifyPropertyChanged* Unity::Services::Vivox::ITranscribedMessage::i___System__ComponentModel__INotifyPropertyChanged() noexcept {
  return static_cast<::System::ComponentModel::INotifyPropertyChanged*>(static_cast<void*>(this));
}
inline ::Unity::Services::Vivox::IChannelSession* Unity::Services::Vivox::ITranscribedMessage::get_ChannelSession() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ITranscribedMessage*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::IChannelSession*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::AccountId* Unity::Services::Vivox::ITranscribedMessage::get_Sender() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ITranscribedMessage*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::AccountId*, false>(this, ___internal_method);
}
inline bool Unity::Services::Vivox::ITranscribedMessage::get_FromSelf() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ITranscribedMessage*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
