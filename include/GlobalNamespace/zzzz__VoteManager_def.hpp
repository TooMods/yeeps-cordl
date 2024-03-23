#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VoteManager)
namespace GlobalNamespace {
class VoteData;
}
namespace GlobalNamespace {
struct VoteType;
}
namespace GlobalNamespace {
struct __ImaginationPrompt__ActionType;
}
namespace GlobalNamespace {
class __VoteManager__OnVoteComplete;
}
namespace GlobalNamespace {
class __VoteManager____c__DisplayClass14_0;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
class VoteManager;
}
namespace GlobalNamespace {
class __VoteManager__OnVoteComplete;
}
namespace GlobalNamespace {
class __VoteManager____c__DisplayClass14_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VoteManager);
MARK_REF_PTR_T(::GlobalNamespace::__VoteManager__OnVoteComplete);
MARK_REF_PTR_T(::GlobalNamespace::__VoteManager____c__DisplayClass14_0);
// Type: ::OnVoteComplete
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::VoteManager::OnVoteComplete*
class CORDL_TYPE __VoteManager__OnVoteComplete : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0xf28d0c, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool approved, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0xf28d94, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0xf28cf4, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(bool approved);

  static inline ::GlobalNamespace::__VoteManager__OnVoteComplete* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0xf21fe4, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VoteManager__OnVoteComplete();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__VoteManager__OnVoteComplete", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VoteManager__OnVoteComplete(__VoteManager__OnVoteComplete&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VoteManager__OnVoteComplete", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VoteManager__OnVoteComplete(__VoteManager__OnVoteComplete const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__VoteManager__OnVoteComplete, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass14_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::VoteManager::<>c__DisplayClass14_0*
class CORDL_TYPE __VoteManager____c__DisplayClass14_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field voteID, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_voteID, put = __cordl_internal_set_voteID))::StringW voteID;

  static inline ::GlobalNamespace::__VoteManager____c__DisplayClass14_0* New_ctor();

  /// @brief Method <CreateVote>b__0, addr 0xf28da0, size 0x9c, virtual false, abstract: false, final false
  inline void _CreateVote_b__0(::GlobalNamespace::__ImaginationPrompt__ActionType actionType);

  constexpr ::StringW const& __cordl_internal_get_voteID() const;

  constexpr ::StringW& __cordl_internal_get_voteID();

  constexpr void __cordl_internal_set_voteID(::StringW value);

  /// @brief Method .ctor, addr 0xf28608, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VoteManager____c__DisplayClass14_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__VoteManager____c__DisplayClass14_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VoteManager____c__DisplayClass14_0(__VoteManager____c__DisplayClass14_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VoteManager____c__DisplayClass14_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VoteManager____c__DisplayClass14_0(__VoteManager____c__DisplayClass14_0 const&) = delete;

  /// @brief Field voteID, offset: 0x10, size: 0x8, def value: None
  ::StringW ___voteID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__VoteManager____c__DisplayClass14_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__VoteManager____c__DisplayClass14_0, ___voteID) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::VoteManager
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::VoteManager*
class CORDL_TYPE VoteManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::VoteManager>> {
public:
  // Declarations
  using OnVoteComplete = ::GlobalNamespace::__VoteManager__OnVoteComplete;

  using __c__DisplayClass14_0 = ::GlobalNamespace::__VoteManager____c__DisplayClass14_0;

  /// @brief Field activeVotes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_activeVotes, put = setStaticF_activeVotes))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::VoteData*>* activeVotes;

  /// @brief Field hasRegisteredToNetworkManager, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_hasRegisteredToNetworkManager, put = setStaticF_hasRegisteredToNetworkManager)) bool hasRegisteredToNetworkManager;

  /// @brief Field nextVoteUpdateTime, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_nextVoteUpdateTime, put = __cordl_internal_set_nextVoteUpdateTime)) float_t nextVoteUpdateTime;

  /// @brief Field pendingCompletes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_pendingCompletes,
                             put = setStaticF_pendingCompletes))::System::Collections::Generic::List_1<::System::ValueTuple_2<::GlobalNamespace::VoteData*, bool>>* pendingCompletes;

  /// @brief Method CreateVote, addr 0xf27bbc, size 0x340, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::VoteData* CreateVote(::StringW voteID, ::GlobalNamespace::VoteType voteType, ::StringW voteCallerUserID, ::StringW voteTargetUserID, bool isLocalVote,
                                                        bool isAutoVote, ::StringW message, ::StringW approvedMessage, ::StringW rejectedMessage,
                                                        ::GlobalNamespace::__VoteManager__OnVoteComplete* onVoteComplete);

  /// @brief Method GenerateNewVoteID, addr 0xf27b90, size 0x2c, virtual false, abstract: false, final false
  static inline ::StringW GenerateNewVoteID();

  /// @brief Method HasPermissionToVote, addr 0xf279d8, size 0x1b8, virtual false, abstract: false, final false
  static inline bool HasPermissionToVote();

  static inline ::GlobalNamespace::VoteManager* New_ctor();

  /// @brief Method OnLeftPhotonRoom, addr 0xf27804, size 0x1d4, virtual false, abstract: false, final false
  static inline void OnLeftPhotonRoom();

  /// @brief Method OnReceiveCallVote, addr 0xf2841c, size 0x1ec, virtual false, abstract: false, final false
  static inline void OnReceiveCallVote(::StringW voteID, ::GlobalNamespace::VoteType voteType, ::StringW voteCallerUserID, ::StringW voteTargetUserID, ::StringW message, ::StringW approvedMessage,
                                       ::StringW rejectedMessage);

  /// @brief Method OnReceiveCastVote, addr 0xf27efc, size 0x2f4, virtual false, abstract: false, final false
  static inline void OnReceiveCastVote(::StringW userID, ::StringW voteID, bool approved);

  /// @brief Method SendCallVote, addr 0xf220a8, size 0x57c, virtual false, abstract: false, final false
  static inline bool SendCallVote(::GlobalNamespace::VoteType voteType, bool allowAutoVote, ::StringW voteTargetUserID, ::StringW message, ::StringW approvedMessage, ::StringW rejectedMessage,
                                  ::GlobalNamespace::__VoteManager__OnVoteComplete* onVoteComplete);

  /// @brief Method SendCastVote, addr 0xf281f0, size 0x22c, virtual false, abstract: false, final false
  static inline void SendCastVote(::StringW voteID, bool approved);

  /// @brief Method Start, addr 0xf276bc, size 0x148, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0xf28610, size 0x5bc, virtual false, abstract: false, final false
  inline void Update();

  constexpr float_t const& __cordl_internal_get_nextVoteUpdateTime() const;

  constexpr float_t& __cordl_internal_get_nextVoteUpdateTime();

  constexpr void __cordl_internal_set_nextVoteUpdateTime(float_t value);

  /// @brief Method .ctor, addr 0xf28bcc, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::VoteData*>* getStaticF_activeVotes();

  static inline bool getStaticF_hasRegisteredToNetworkManager();

  static inline ::System::Collections::Generic::List_1<::System::ValueTuple_2<::GlobalNamespace::VoteData*, bool>>* getStaticF_pendingCompletes();

  static inline void setStaticF_activeVotes(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::VoteData*>* value);

  static inline void setStaticF_hasRegisteredToNetworkManager(bool value);

  static inline void setStaticF_pendingCompletes(::System::Collections::Generic::List_1<::System::ValueTuple_2<::GlobalNamespace::VoteData*, bool>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VoteManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VoteManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VoteManager(VoteManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VoteManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VoteManager(VoteManager const&) = delete;

  /// @brief Field nextVoteUpdateTime, offset: 0x18, size: 0x4, def value: None
  float_t ___nextVoteUpdateTime;

  /// @brief Field autoVoteAsVoteCaller offset 0xffffffff size 0x1
  static constexpr bool autoVoteAsVoteCaller{ false };

  /// @brief Field autoVoteIfAloneInRoom offset 0xffffffff size 0x1
  static constexpr bool autoVoteIfAloneInRoom{ true };

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Voting: " };

  /// @brief Field timeBetweenVoteUpdates offset 0xffffffff size 0x4
  static constexpr float_t timeBetweenVoteUpdates{ 1.0 };

  /// @brief Field voteDuration offset 0xffffffff size 0x4
  static constexpr float_t voteDuration{ 30.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VoteManager, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::VoteManager, ___nextVoteUpdateTime) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VoteManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VoteManager*, "", "VoteManager");
NEED_NO_BOX(::GlobalNamespace::__VoteManager__OnVoteComplete);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__VoteManager__OnVoteComplete*, "", "VoteManager/OnVoteComplete");
NEED_NO_BOX(::GlobalNamespace::__VoteManager____c__DisplayClass14_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__VoteManager____c__DisplayClass14_0*, "", "VoteManager/<>c__DisplayClass14_0");
