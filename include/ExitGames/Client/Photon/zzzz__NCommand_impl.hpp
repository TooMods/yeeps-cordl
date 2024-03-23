#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__NCommand_def.hpp"
#include "ExitGames/Client/Photon/zzzz__EnetPeer_def.hpp"
#include "ExitGames/Client/Photon/zzzz__NCommandPool_def.hpp"
#include "ExitGames/Client/Photon/zzzz__StreamBuffer_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::NCommand.get_SizeOfPayload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::NCommand::*)()>(&::ExitGames::Client::Photon::NCommand::get_SizeOfPayload)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x277b37c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NCommand*>::get(),
                                                                               "get_SizeOfPayload", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NCommand.get_IsFlaggedUnsequenced
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::NCommand::*)()>(
    &::ExitGames::Client::Photon::NCommand::get_IsFlaggedUnsequenced)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x277bdc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NCommand*>::get(),
                                                                               "get_IsFlaggedUnsequenced", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NCommand.get_IsFlaggedReliable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::NCommand::*)()>(&::ExitGames::Client::Photon::NCommand::get_IsFlaggedReliable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x277ac6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NCommand*>::get(),
                                                                               "get_IsFlaggedReliable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NCommand.CreateAck
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ExitGames::Client::Photon::NCommand*, int32_t)>(
    &::ExitGames::Client::Photon::NCommand::CreateAck)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x277becc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NCommand*>::get(), "CreateAck", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::NCommand*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NCommand._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::NCommand::*)(
    ::ExitGames::Client::Photon::EnetPeer*, uint8_t, ::ExitGames::Client::Photon::StreamBuffer*, uint8_t)>(&::ExitGames::Client::Photon::NCommand::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x27803dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NCommand*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::EnetPeer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NCommand.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::NCommand::*)(
    ::ExitGames::Client::Photon::EnetPeer*, uint8_t, ::ExitGames::Client::Photon::StreamBuffer*, uint8_t)>(&::ExitGames::Client::Photon::NCommand::Initialize)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x2780430;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NCommand*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::EnetPeer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NCommand._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::NCommand::*)(
    ::ExitGames::Client::Photon::EnetPeer*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ByRef<int32_t>)>(&::ExitGames::Client::Photon::NCommand::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2780068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NCommand*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::EnetPeer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NCommand.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::NCommand::*)(
    ::ExitGames::Client::Photon::EnetPeer*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ByRef<int32_t>)>(&::ExitGames::Client::Photon::NCommand::Initialize)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x27800b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NCommand*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::EnetPeer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NCommand.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::NCommand::*)()>(&::ExitGames::Client::Photon::NCommand::Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2780864;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NCommand*>::get(), "Reset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NCommand.SerializeHeader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::NCommand::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ByRef<int32_t>)>(
    &::ExitGames::Client::Photon::NCommand::SerializeHeader)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x277b180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NCommand*>::get(), "SerializeHeader", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NCommand.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::ExitGames::Client::Photon::NCommand::*)()>(
    &::ExitGames::Client::Photon::NCommand::Serialize)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x277b390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NCommand*>::get(), "Serialize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NCommand.FreePayload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::NCommand::*)()>(&::ExitGames::Client::Photon::NCommand::FreePayload)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x277869c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NCommand*>::get(), "FreePayload",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NCommand.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::NCommand::*)()>(&::ExitGames::Client::Photon::NCommand::Release)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2778680;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NCommand*>::get(), "Release",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NCommand.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::NCommand::*)(::ExitGames::Client::Photon::NCommand*)>(
    &::ExitGames::Client::Photon::NCommand::CompareTo)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x278089c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NCommand*>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::NCommand*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NCommand.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::ExitGames::Client::Photon::NCommand::*)()>(&::ExitGames::Client::Photon::NCommand::ToString)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x27808d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NCommand*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NCommand*>::get(), 3));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IComparable_1<::ExitGames::Client::Photon::NCommand*>"
constexpr ExitGames::Client::Photon::NCommand::operator ::System::IComparable_1<::ExitGames::Client::Photon::NCommand*>*() noexcept {
  return static_cast<::System::IComparable_1<::ExitGames::Client::Photon::NCommand*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable_1<::ExitGames::Client::Photon::NCommand*>"
constexpr ::System::IComparable_1<::ExitGames::Client::Photon::NCommand*>* ExitGames::Client::Photon::NCommand::i___System__IComparable_1___ExitGames__Client__Photon__NCommand__() noexcept {
  return static_cast<::System::IComparable_1<::ExitGames::Client::Photon::NCommand*>*>(static_cast<void*>(this));
}
constexpr uint8_t& ExitGames::Client::Photon::NCommand::__cordl_internal_get_commandFlags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___commandFlags;
}
constexpr uint8_t const& ExitGames::Client::Photon::NCommand::__cordl_internal_get_commandFlags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___commandFlags;
}
constexpr void ExitGames::Client::Photon::NCommand::__cordl_internal_set_commandFlags(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___commandFlags = value;
}
constexpr uint8_t& ExitGames::Client::Photon::NCommand::__cordl_internal_get_commandType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___commandType;
}
constexpr uint8_t const& ExitGames::Client::Photon::NCommand::__cordl_internal_get_commandType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___commandType;
}
constexpr void ExitGames::Client::Photon::NCommand::__cordl_internal_set_commandType(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___commandType = value;
}
constexpr uint8_t& ExitGames::Client::Photon::NCommand::__cordl_internal_get_commandChannelID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___commandChannelID;
}
constexpr uint8_t const& ExitGames::Client::Photon::NCommand::__cordl_internal_get_commandChannelID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___commandChannelID;
}
constexpr void ExitGames::Client::Photon::NCommand::__cordl_internal_set_commandChannelID(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___commandChannelID = value;
}
constexpr int32_t& ExitGames::Client::Photon::NCommand::__cordl_internal_get_reliableSequenceNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reliableSequenceNumber;
}
constexpr int32_t const& ExitGames::Client::Photon::NCommand::__cordl_internal_get_reliableSequenceNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reliableSequenceNumber;
}
constexpr void ExitGames::Client::Photon::NCommand::__cordl_internal_set_reliableSequenceNumber(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reliableSequenceNumber = value;
}
constexpr int32_t& ExitGames::Client::Photon::NCommand::__cordl_internal_get_unreliableSequenceNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unreliableSequenceNumber;
}
constexpr int32_t const& ExitGames::Client::Photon::NCommand::__cordl_internal_get_unreliableSequenceNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unreliableSequenceNumber;
}
constexpr void ExitGames::Client::Photon::NCommand::__cordl_internal_set_unreliableSequenceNumber(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___unreliableSequenceNumber = value;
}
constexpr int32_t& ExitGames::Client::Photon::NCommand::__cordl_internal_get_unsequencedGroupNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unsequencedGroupNumber;
}
constexpr int32_t const& ExitGames::Client::Photon::NCommand::__cordl_internal_get_unsequencedGroupNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unsequencedGroupNumber;
}
constexpr void ExitGames::Client::Photon::NCommand::__cordl_internal_set_unsequencedGroupNumber(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___unsequencedGroupNumber = value;
}
constexpr uint8_t& ExitGames::Client::Photon::NCommand::__cordl_internal_get_reservedByte() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reservedByte;
}
constexpr uint8_t const& ExitGames::Client::Photon::NCommand::__cordl_internal_get_reservedByte() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reservedByte;
}
constexpr void ExitGames::Client::Photon::NCommand::__cordl_internal_set_reservedByte(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reservedByte = value;
}
constexpr int32_t& ExitGames::Client::Photon::NCommand::__cordl_internal_get_startSequenceNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startSequenceNumber;
}
constexpr int32_t const& ExitGames::Client::Photon::NCommand::__cordl_internal_get_startSequenceNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startSequenceNumber;
}
constexpr void ExitGames::Client::Photon::NCommand::__cordl_internal_set_startSequenceNumber(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startSequenceNumber = value;
}
constexpr int32_t& ExitGames::Client::Photon::NCommand::__cordl_internal_get_fragmentCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fragmentCount;
}
constexpr int32_t const& ExitGames::Client::Photon::NCommand::__cordl_internal_get_fragmentCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fragmentCount;
}
constexpr void ExitGames::Client::Photon::NCommand::__cordl_internal_set_fragmentCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fragmentCount = value;
}
constexpr int32_t& ExitGames::Client::Photon::NCommand::__cordl_internal_get_fragmentNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fragmentNumber;
}
constexpr int32_t const& ExitGames::Client::Photon::NCommand::__cordl_internal_get_fragmentNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fragmentNumber;
}
constexpr void ExitGames::Client::Photon::NCommand::__cordl_internal_set_fragmentNumber(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fragmentNumber = value;
}
constexpr int32_t& ExitGames::Client::Photon::NCommand::__cordl_internal_get_totalLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___totalLength;
}
constexpr int32_t const& ExitGames::Client::Photon::NCommand::__cordl_internal_get_totalLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___totalLength;
}
constexpr void ExitGames::Client::Photon::NCommand::__cordl_internal_set_totalLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___totalLength = value;
}
constexpr int32_t& ExitGames::Client::Photon::NCommand::__cordl_internal_get_fragmentOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fragmentOffset;
}
constexpr int32_t const& ExitGames::Client::Photon::NCommand::__cordl_internal_get_fragmentOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fragmentOffset;
}
constexpr void ExitGames::Client::Photon::NCommand::__cordl_internal_set_fragmentOffset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fragmentOffset = value;
}
constexpr int32_t& ExitGames::Client::Photon::NCommand::__cordl_internal_get_fragmentsRemaining() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fragmentsRemaining;
}
constexpr int32_t const& ExitGames::Client::Photon::NCommand::__cordl_internal_get_fragmentsRemaining() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fragmentsRemaining;
}
constexpr void ExitGames::Client::Photon::NCommand::__cordl_internal_set_fragmentsRemaining(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fragmentsRemaining = value;
}
constexpr int32_t& ExitGames::Client::Photon::NCommand::__cordl_internal_get_commandSentTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___commandSentTime;
}
constexpr int32_t const& ExitGames::Client::Photon::NCommand::__cordl_internal_get_commandSentTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___commandSentTime;
}
constexpr void ExitGames::Client::Photon::NCommand::__cordl_internal_set_commandSentTime(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___commandSentTime = value;
}
constexpr uint8_t& ExitGames::Client::Photon::NCommand::__cordl_internal_get_commandSentCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___commandSentCount;
}
constexpr uint8_t const& ExitGames::Client::Photon::NCommand::__cordl_internal_get_commandSentCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___commandSentCount;
}
constexpr void ExitGames::Client::Photon::NCommand::__cordl_internal_set_commandSentCount(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___commandSentCount = value;
}
constexpr int32_t& ExitGames::Client::Photon::NCommand::__cordl_internal_get_roundTripTimeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roundTripTimeout;
}
constexpr int32_t const& ExitGames::Client::Photon::NCommand::__cordl_internal_get_roundTripTimeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roundTripTimeout;
}
constexpr void ExitGames::Client::Photon::NCommand::__cordl_internal_set_roundTripTimeout(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___roundTripTimeout = value;
}
constexpr int32_t& ExitGames::Client::Photon::NCommand::__cordl_internal_get_timeoutTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeoutTime;
}
constexpr int32_t const& ExitGames::Client::Photon::NCommand::__cordl_internal_get_timeoutTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeoutTime;
}
constexpr void ExitGames::Client::Photon::NCommand::__cordl_internal_set_timeoutTime(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___timeoutTime = value;
}
constexpr int32_t& ExitGames::Client::Photon::NCommand::__cordl_internal_get_ackReceivedReliableSequenceNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ackReceivedReliableSequenceNumber;
}
constexpr int32_t const& ExitGames::Client::Photon::NCommand::__cordl_internal_get_ackReceivedReliableSequenceNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ackReceivedReliableSequenceNumber;
}
constexpr void ExitGames::Client::Photon::NCommand::__cordl_internal_set_ackReceivedReliableSequenceNumber(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ackReceivedReliableSequenceNumber = value;
}
constexpr int32_t& ExitGames::Client::Photon::NCommand::__cordl_internal_get_ackReceivedSentTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ackReceivedSentTime;
}
constexpr int32_t const& ExitGames::Client::Photon::NCommand::__cordl_internal_get_ackReceivedSentTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ackReceivedSentTime;
}
constexpr void ExitGames::Client::Photon::NCommand::__cordl_internal_set_ackReceivedSentTime(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ackReceivedSentTime = value;
}
constexpr int32_t& ExitGames::Client::Photon::NCommand::__cordl_internal_get_Size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Size;
}
constexpr int32_t const& ExitGames::Client::Photon::NCommand::__cordl_internal_get_Size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Size;
}
constexpr void ExitGames::Client::Photon::NCommand::__cordl_internal_set_Size(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Size = value;
}
constexpr ::ExitGames::Client::Photon::StreamBuffer*& ExitGames::Client::Photon::NCommand::__cordl_internal_get_Payload() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Payload;
}
constexpr ::cordl_internals::to_const_pointer<::ExitGames::Client::Photon::StreamBuffer*> const& ExitGames::Client::Photon::NCommand::__cordl_internal_get_Payload() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Payload;
}
constexpr void ExitGames::Client::Photon::NCommand::__cordl_internal_set_Payload(::ExitGames::Client::Photon::StreamBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Payload)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ExitGames::Client::Photon::NCommandPool*& ExitGames::Client::Photon::NCommand::__cordl_internal_get_returnPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___returnPool;
}
constexpr ::cordl_internals::to_const_pointer<::ExitGames::Client::Photon::NCommandPool*> const& ExitGames::Client::Photon::NCommand::__cordl_internal_get_returnPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___returnPool;
}
constexpr void ExitGames::Client::Photon::NCommand::__cordl_internal_set_returnPool(::ExitGames::Client::Photon::NCommandPool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___returnPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline int32_t ExitGames::Client::Photon::NCommand::get_SizeOfPayload() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NCommand*>::get(), "get_SizeOfPayload",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::NCommand::get_IsFlaggedUnsequenced() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NCommand*>::get(),
                                                                             "get_IsFlaggedUnsequenced", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::NCommand::get_IsFlaggedReliable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NCommand*>::get(),
                                                                             "get_IsFlaggedReliable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::NCommand::CreateAck(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, ::ExitGames::Client::Photon::NCommand* commandToAck, int32_t sentTime) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NCommand*>::get(), "CreateAck", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::NCommand*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, buffer, offset, commandToAck, sentTime);
}
inline ::ExitGames::Client::Photon::NCommand* ExitGames::Client::Photon::NCommand::New_ctor(::ExitGames::Client::Photon::EnetPeer* peer, uint8_t commandType,
                                                                                            ::ExitGames::Client::Photon::StreamBuffer* payload, uint8_t channel) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ExitGames::Client::Photon::NCommand*>(peer, commandType, payload, channel));
}
inline void ExitGames::Client::Photon::NCommand::_ctor(::ExitGames::Client::Photon::EnetPeer* peer, uint8_t commandType, ::ExitGames::Client::Photon::StreamBuffer* payload, uint8_t channel) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NCommand*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::EnetPeer*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer, commandType, payload, channel);
}
inline void ExitGames::Client::Photon::NCommand::Initialize(::ExitGames::Client::Photon::EnetPeer* peer, uint8_t commandType, ::ExitGames::Client::Photon::StreamBuffer* payload, uint8_t channel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NCommand*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::EnetPeer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer, commandType, payload, channel);
}
inline ::ExitGames::Client::Photon::NCommand* ExitGames::Client::Photon::NCommand::New_ctor(::ExitGames::Client::Photon::EnetPeer* peer, ::ArrayW<uint8_t, ::Array<uint8_t>*> inBuff,
                                                                                            ByRef<int32_t> readingOffset) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ExitGames::Client::Photon::NCommand*>(peer, inBuff, readingOffset));
}
inline void ExitGames::Client::Photon::NCommand::_ctor(::ExitGames::Client::Photon::EnetPeer* peer, ::ArrayW<uint8_t, ::Array<uint8_t>*> inBuff, ByRef<int32_t> readingOffset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NCommand*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::EnetPeer*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer, inBuff, readingOffset);
}
inline void ExitGames::Client::Photon::NCommand::Initialize(::ExitGames::Client::Photon::EnetPeer* peer, ::ArrayW<uint8_t, ::Array<uint8_t>*> inBuff, ByRef<int32_t> readingOffset) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NCommand*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::EnetPeer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer, inBuff, readingOffset);
}
inline void ExitGames::Client::Photon::NCommand::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NCommand*>::get(), "Reset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::NCommand::SerializeHeader(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, ByRef<int32_t> bufferIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NCommand*>::get(), "SerializeHeader", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, bufferIndex);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ExitGames::Client::Photon::NCommand::Serialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NCommand*>::get(), "Serialize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::NCommand::FreePayload() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NCommand*>::get(), "FreePayload",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::NCommand::Release() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NCommand*>::get(), "Release",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::NCommand::CompareTo(::ExitGames::Client::Photon::NCommand* other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NCommand*>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::NCommand*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
inline ::StringW ExitGames::Client::Photon::NCommand::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NCommand*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::NCommand::NCommand() {}
