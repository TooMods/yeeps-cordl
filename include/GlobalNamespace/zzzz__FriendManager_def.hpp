#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FriendManager)
namespace GlobalNamespace {
class AccountData;
}
namespace GlobalNamespace {
class __FriendManager__OnFriendsListUpdated;
}
namespace Oculus::Platform {
class Message;
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
// Forward declare root types
namespace GlobalNamespace {
class FriendManager;
}
namespace GlobalNamespace {
class __FriendManager__OnFriendsListUpdated;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FriendManager);
MARK_REF_PTR_T(::GlobalNamespace::__FriendManager__OnFriendsListUpdated);
// Type: ::OnFriendsListUpdated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FriendManager::OnFriendsListUpdated*
class CORDL_TYPE __FriendManager__OnFriendsListUpdated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2c86460, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::List_1<::StringW>* friendAccountIDs, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2c86480, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2c8644c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Collections::Generic::List_1<::StringW>* friendAccountIDs);

  static inline ::GlobalNamespace::__FriendManager__OnFriendsListUpdated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2c737b4, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FriendManager__OnFriendsListUpdated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FriendManager__OnFriendsListUpdated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FriendManager__OnFriendsListUpdated(__FriendManager__OnFriendsListUpdated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FriendManager__OnFriendsListUpdated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FriendManager__OnFriendsListUpdated(__FriendManager__OnFriendsListUpdated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__FriendManager__OnFriendsListUpdated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::FriendManager
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FriendManager*
class CORDL_TYPE FriendManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::FriendManager>> {
public:
  // Declarations
  using OnFriendsListUpdated = ::GlobalNamespace::__FriendManager__OnFriendsListUpdated;

  /// @brief Field <friendAccountIDs>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__friendAccountIDs_k__BackingField,
                             put = setStaticF__friendAccountIDs_k__BackingField))::System::Collections::Generic::List_1<::StringW>* _friendAccountIDs_k__BackingField;

  /// @brief Field <hasLoadedFriendsList>k__BackingField, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__hasLoadedFriendsList_k__BackingField, put = setStaticF__hasLoadedFriendsList_k__BackingField)) bool _hasLoadedFriendsList_k__BackingField;

  /// @brief Field canGetFriendsListFromOculus, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_canGetFriendsListFromOculus, put = setStaticF_canGetFriendsListFromOculus)) bool canGetFriendsListFromOculus;

  /// @brief Field hasShownFriendsErrorSinceLastSuccess, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_hasShownFriendsErrorSinceLastSuccess, put = setStaticF_hasShownFriendsErrorSinceLastSuccess)) bool hasShownFriendsErrorSinceLastSuccess;

  /// @brief Field nextAutoRefreshTime, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_nextAutoRefreshTime, put = setStaticF_nextAutoRefreshTime)) float_t nextAutoRefreshTime;

  /// @brief Field onFriendsListUpdatedCallbacks, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_onFriendsListUpdatedCallbacks,
                      put = __cordl_internal_set_onFriendsListUpdatedCallbacks))::GlobalNamespace::__FriendManager__OnFriendsListUpdated* onFriendsListUpdatedCallbacks;

  /// @brief Field onFriendsListUpdatedPersistentCallbacks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onFriendsListUpdatedPersistentCallbacks,
                             put = setStaticF_onFriendsListUpdatedPersistentCallbacks))::GlobalNamespace::__FriendManager__OnFriendsListUpdated* onFriendsListUpdatedPersistentCallbacks;

  /// @brief Method GetLoggedInUserFriendsCallback, addr 0x2c85bcc, size 0x4d8, virtual false, abstract: false, final false
  static inline void GetLoggedInUserFriendsCallback(::Oculus::Platform::Message* msg);

  /// @brief Method IsFriend, addr 0x2c81644, size 0xb0, virtual false, abstract: false, final false
  static inline bool IsFriend(::StringW accountID);

  static inline ::GlobalNamespace::FriendManager* New_ctor();

  /// @brief Method OnAccountDataLoaded, addr 0x2c85114, size 0x128, virtual false, abstract: false, final false
  inline void OnAccountDataLoaded(::GlobalNamespace::AccountData* accountData);

  /// @brief Method OnError, addr 0x2c85a28, size 0x1a4, virtual false, abstract: false, final false
  static inline void OnError(::StringW message);

  /// @brief Method RefreshFriendsList, addr 0x2c8523c, size 0x220, virtual false, abstract: false, final false
  static inline void RefreshFriendsList();

  /// @brief Method SetFriendsList, addr 0x2c8545c, size 0x51c, virtual false, abstract: false, final false
  static inline void SetFriendsList(::System::Collections::Generic::List_1<::StringW>* newFriendAccountIDs);

  /// @brief Method Start, addr 0x2c84ff4, size 0x120, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TryAddFriend, addr 0x2c86104, size 0x1cc, virtual false, abstract: false, final false
  static inline bool TryAddFriend(::StringW accountID);

  /// @brief Method Update, addr 0x2c85978, size 0xb0, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::GlobalNamespace::__FriendManager__OnFriendsListUpdated*& __cordl_internal_get_onFriendsListUpdatedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__FriendManager__OnFriendsListUpdated*> const& __cordl_internal_get_onFriendsListUpdatedCallbacks() const;

  constexpr void __cordl_internal_set_onFriendsListUpdatedCallbacks(::GlobalNamespace::__FriendManager__OnFriendsListUpdated* value);

  /// @brief Method .ctor, addr 0x2c86364, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::List_1<::StringW>* getStaticF__friendAccountIDs_k__BackingField();

  static inline bool getStaticF__hasLoadedFriendsList_k__BackingField();

  static inline bool getStaticF_canGetFriendsListFromOculus();

  static inline bool getStaticF_hasShownFriendsErrorSinceLastSuccess();

  static inline float_t getStaticF_nextAutoRefreshTime();

  static inline ::GlobalNamespace::__FriendManager__OnFriendsListUpdated* getStaticF_onFriendsListUpdatedPersistentCallbacks();

  /// @brief Method get_friendAccountIDs, addr 0x2c84f40, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::StringW>* get_friendAccountIDs();

  /// @brief Method get_hasLoadedFriendsList, addr 0x2c84e8c, size 0x58, virtual false, abstract: false, final false
  static inline bool get_hasLoadedFriendsList();

  static inline void setStaticF__friendAccountIDs_k__BackingField(::System::Collections::Generic::List_1<::StringW>* value);

  static inline void setStaticF__hasLoadedFriendsList_k__BackingField(bool value);

  static inline void setStaticF_canGetFriendsListFromOculus(bool value);

  static inline void setStaticF_hasShownFriendsErrorSinceLastSuccess(bool value);

  static inline void setStaticF_nextAutoRefreshTime(float_t value);

  static inline void setStaticF_onFriendsListUpdatedPersistentCallbacks(::GlobalNamespace::__FriendManager__OnFriendsListUpdated* value);

  /// @brief Method set_friendAccountIDs, addr 0x2c84f98, size 0x5c, virtual false, abstract: false, final false
  static inline void set_friendAccountIDs(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method set_hasLoadedFriendsList, addr 0x2c84ee4, size 0x5c, virtual false, abstract: false, final false
  static inline void set_hasLoadedFriendsList(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FriendManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FriendManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FriendManager(FriendManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FriendManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FriendManager(FriendManager const&) = delete;

  /// @brief Field onFriendsListUpdatedCallbacks, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__FriendManager__OnFriendsListUpdated* ___onFriendsListUpdatedCallbacks;

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Friends: " };

  /// @brief Field failedToGetFriendsPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString failedToGetFriendsPreface{ u"Failed to get friends: " };

  /// @brief Field timeBetweenAutoRefreshes offset 0xffffffff size 0x4
  static constexpr float_t timeBetweenAutoRefreshes{ 60.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FriendManager, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendManager, ___onFriendsListUpdatedCallbacks) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FriendManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FriendManager*, "", "FriendManager");
NEED_NO_BOX(::GlobalNamespace::__FriendManager__OnFriendsListUpdated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__FriendManager__OnFriendsListUpdated*, "", "FriendManager/OnFriendsListUpdated");
