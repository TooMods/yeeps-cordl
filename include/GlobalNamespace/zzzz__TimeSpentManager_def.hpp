#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeSpentManager)
namespace GlobalNamespace {
class Player;
}
namespace GlobalNamespace {
class Room;
}
namespace GlobalNamespace {
class TimeSpentChannel;
}
namespace GlobalNamespace {
class __TimeSpentManager__OnChannelSessionComplete;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
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
class TimeSpentManager;
}
namespace GlobalNamespace {
class __TimeSpentManager__OnChannelSessionComplete;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TimeSpentManager);
MARK_REF_PTR_T(::GlobalNamespace::__TimeSpentManager__OnChannelSessionComplete);
// Type: ::OnChannelSessionComplete
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TimeSpentManager::OnChannelSessionComplete*
class CORDL_TYPE __TimeSpentManager__OnChannelSessionComplete : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x158787c, size 0x98, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW channelKey, ::StringW key, float_t timeSpent, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x1587914, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x1587868, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW channelKey, ::StringW key, float_t timeSpent);

  static inline ::GlobalNamespace::__TimeSpentManager__OnChannelSessionComplete* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x1584158, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimeSpentManager__OnChannelSessionComplete();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TimeSpentManager__OnChannelSessionComplete", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TimeSpentManager__OnChannelSessionComplete(__TimeSpentManager__OnChannelSessionComplete&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TimeSpentManager__OnChannelSessionComplete", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TimeSpentManager__OnChannelSessionComplete(__TimeSpentManager__OnChannelSessionComplete const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TimeSpentManager__OnChannelSessionComplete, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::TimeSpentManager
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TimeSpentManager*
class CORDL_TYPE TimeSpentManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::TimeSpentManager>> {
public:
  // Declarations
  using OnChannelSessionComplete = ::GlobalNamespace::__TimeSpentManager__OnChannelSessionComplete;

  /// @brief Field channels, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_channels, put = setStaticF_channels))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::TimeSpentChannel*>* channels;

  /// @brief Field onChannelSessionCompleteCallbacks, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_onChannelSessionCompleteCallbacks,
                      put = __cordl_internal_set_onChannelSessionCompleteCallbacks))::GlobalNamespace::__TimeSpentManager__OnChannelSessionComplete* onChannelSessionCompleteCallbacks;

  static inline ::GlobalNamespace::TimeSpentManager* New_ctor();

  /// @brief Method OnApplicationQuit, addr 0x15870d4, size 0x180, virtual false, abstract: false, final false
  inline void OnApplicationQuit();

  /// @brief Method OnIsCreativeModeUpdated, addr 0x1586ce8, size 0xd0, virtual false, abstract: false, final false
  inline void OnIsCreativeModeUpdated(bool newIsCreativeMode);

  /// @brief Method OnMasterPlayerCreated, addr 0x1586a18, size 0x2d0, virtual false, abstract: false, final false
  inline void OnMasterPlayerCreated(::GlobalNamespace::Player* player);

  /// @brief Method OnRoomLoaded, addr 0x1586db8, size 0x31c, virtual false, abstract: false, final false
  inline void OnRoomLoaded(::GlobalNamespace::Room* room);

  /// @brief Method OnRoomUnloaded, addr 0x1587254, size 0x98, virtual false, abstract: false, final false
  inline void OnRoomUnloaded();

  /// @brief Method OnSessionComplete, addr 0x15872ec, size 0x308, virtual false, abstract: false, final false
  inline void OnSessionComplete(::StringW channelKey, ::StringW key, float_t timeSpent);

  /// @brief Method Start, addr 0x1586660, size 0x3b8, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method <Start>b__8_0, addr 0x15876c8, size 0x68, virtual false, abstract: false, final false
  inline void _Start_b__8_0(::StringW key, float_t timeSpent);

  /// @brief Method <Start>b__8_1, addr 0x1587730, size 0x68, virtual false, abstract: false, final false
  inline void _Start_b__8_1(::StringW key, float_t timeSpent);

  /// @brief Method <Start>b__8_2, addr 0x1587798, size 0x68, virtual false, abstract: false, final false
  inline void _Start_b__8_2(::StringW key, float_t timeSpent);

  /// @brief Method <Start>b__8_3, addr 0x1587800, size 0x68, virtual false, abstract: false, final false
  inline void _Start_b__8_3(::StringW key, float_t timeSpent);

  constexpr ::GlobalNamespace::__TimeSpentManager__OnChannelSessionComplete*& __cordl_internal_get_onChannelSessionCompleteCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__TimeSpentManager__OnChannelSessionComplete*> const& __cordl_internal_get_onChannelSessionCompleteCallbacks() const;

  constexpr void __cordl_internal_set_onChannelSessionCompleteCallbacks(::GlobalNamespace::__TimeSpentManager__OnChannelSessionComplete* value);

  /// @brief Method .ctor, addr 0x15875f4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::TimeSpentChannel*>* getStaticF_channels();

  static inline void setStaticF_channels(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::TimeSpentChannel*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeSpentManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimeSpentManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeSpentManager(TimeSpentManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeSpentManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeSpentManager(TimeSpentManager const&) = delete;

  /// @brief Field onChannelSessionCompleteCallbacks, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__TimeSpentManager__OnChannelSessionComplete* ___onChannelSessionCompleteCallbacks;

  /// @brief Field channelKey_location offset 0xffffffff size 0x8
  static constexpr ::ConstString channelKey_location{ u"location" };

  /// @brief Field channelKey_map offset 0xffffffff size 0x8
  static constexpr ::ConstString channelKey_map{ u"map" };

  /// @brief Field channelKey_mode offset 0xffffffff size 0x8
  static constexpr ::ConstString channelKey_mode{ u"mode" };

  /// @brief Field channelKey_theme offset 0xffffffff size 0x8
  static constexpr ::ConstString channelKey_theme{ u"theme" };

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Time Spent: " };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TimeSpentManager, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeSpentManager, ___onChannelSessionCompleteCallbacks) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TimeSpentManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TimeSpentManager*, "", "TimeSpentManager");
NEED_NO_BOX(::GlobalNamespace::__TimeSpentManager__OnChannelSessionComplete);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TimeSpentManager__OnChannelSessionComplete*, "", "TimeSpentManager/OnChannelSessionComplete");
