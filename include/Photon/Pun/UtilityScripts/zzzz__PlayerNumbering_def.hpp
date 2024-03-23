#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/zzzz__MonoBehaviourPunCallbacks_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerNumbering)
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace Photon::Pun::UtilityScripts {
class __PlayerNumbering__PlayerNumberingChanged;
}
namespace Photon::Pun::UtilityScripts {
class __PlayerNumbering____c;
}
namespace Photon::Realtime {
class Player;
}
namespace System {
class AsyncCallback;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class PlayerNumbering;
}
namespace Photon::Pun::UtilityScripts {
class __PlayerNumbering__PlayerNumberingChanged;
}
namespace Photon::Pun::UtilityScripts {
class __PlayerNumbering____c;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::UtilityScripts::PlayerNumbering);
MARK_REF_PTR_T(::Photon::Pun::UtilityScripts::__PlayerNumbering__PlayerNumberingChanged);
MARK_REF_PTR_T(::Photon::Pun::UtilityScripts::__PlayerNumbering____c);
// Type: ::PlayerNumberingChanged
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: ::PlayerNumbering::PlayerNumberingChanged*
class CORDL_TYPE __PlayerNumbering__PlayerNumberingChanged : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x1ec6a3c, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x1ec6a5c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x1ec6a28, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::Photon::Pun::UtilityScripts::__PlayerNumbering__PlayerNumberingChanged* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x1ec696c, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerNumbering__PlayerNumberingChanged();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerNumbering__PlayerNumberingChanged", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerNumbering__PlayerNumberingChanged(__PlayerNumbering__PlayerNumberingChanged&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerNumbering__PlayerNumberingChanged", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerNumbering__PlayerNumberingChanged(__PlayerNumbering__PlayerNumberingChanged const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::UtilityScripts::__PlayerNumbering__PlayerNumberingChanged, 0x80>, "Size mismatch!");

} // namespace Photon::Pun::UtilityScripts
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: ::PlayerNumbering::<>c*
class CORDL_TYPE __PlayerNumbering____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Photon::Pun::UtilityScripts::__PlayerNumbering____c* __9;

  /// @brief Field <>9__14_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__14_0, put = setStaticF___9__14_0))::System::Func_2<::Photon::Realtime::Player*, int32_t>* __9__14_0;

  /// @brief Field <>9__14_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__14_1, put = setStaticF___9__14_1))::System::Func_2<::Photon::Realtime::Player*, int32_t>* __9__14_1;

  /// @brief Field <>9__14_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__14_2, put = setStaticF___9__14_2))::System::Func_2<::Photon::Realtime::Player*, int32_t>* __9__14_2;

  static inline ::Photon::Pun::UtilityScripts::__PlayerNumbering____c* New_ctor();

  /// @brief Method <RefreshData>b__14_0, addr 0x1ec6ad4, size 0x8, virtual false, abstract: false, final false
  inline int32_t _RefreshData_b__14_0(::Photon::Realtime::Player* p);

  /// @brief Method <RefreshData>b__14_1, addr 0x1ec6adc, size 0x18, virtual false, abstract: false, final false
  inline int32_t _RefreshData_b__14_1(::Photon::Realtime::Player* p);

  /// @brief Method <RefreshData>b__14_2, addr 0x1ec6af4, size 0x8, virtual false, abstract: false, final false
  inline int32_t _RefreshData_b__14_2(::Photon::Realtime::Player* p);

  /// @brief Method .ctor, addr 0x1ec6acc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Photon::Pun::UtilityScripts::__PlayerNumbering____c* getStaticF___9();

  static inline ::System::Func_2<::Photon::Realtime::Player*, int32_t>* getStaticF___9__14_0();

  static inline ::System::Func_2<::Photon::Realtime::Player*, int32_t>* getStaticF___9__14_1();

  static inline ::System::Func_2<::Photon::Realtime::Player*, int32_t>* getStaticF___9__14_2();

  static inline void setStaticF___9(::Photon::Pun::UtilityScripts::__PlayerNumbering____c* value);

  static inline void setStaticF___9__14_0(::System::Func_2<::Photon::Realtime::Player*, int32_t>* value);

  static inline void setStaticF___9__14_1(::System::Func_2<::Photon::Realtime::Player*, int32_t>* value);

  static inline void setStaticF___9__14_2(::System::Func_2<::Photon::Realtime::Player*, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerNumbering____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerNumbering____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerNumbering____c(__PlayerNumbering____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerNumbering____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerNumbering____c(__PlayerNumbering____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::UtilityScripts::__PlayerNumbering____c, 0x10>, "Size mismatch!");

} // namespace Photon::Pun::UtilityScripts
// Type: Photon.Pun.UtilityScripts::PlayerNumbering
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: ::Photon.Pun.UtilityScripts::PlayerNumbering*
class CORDL_TYPE PlayerNumbering : public ::Photon::Pun::MonoBehaviourPunCallbacks {
public:
  // Declarations
  using PlayerNumberingChanged = ::Photon::Pun::UtilityScripts::__PlayerNumbering__PlayerNumberingChanged;

  using __c = ::Photon::Pun::UtilityScripts::__PlayerNumbering____c;

  /// @brief Field OnPlayerNumberingChanged, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_OnPlayerNumberingChanged,
                             put = setStaticF_OnPlayerNumberingChanged))::Photon::Pun::UtilityScripts::__PlayerNumbering__PlayerNumberingChanged* OnPlayerNumberingChanged;

  /// @brief Field SortedPlayers, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SortedPlayers, put = setStaticF_SortedPlayers))::ArrayW<::Photon::Realtime::Player*, ::Array<::Photon::Realtime::Player*>*> SortedPlayers;

  /// @brief Field dontDestroyOnLoad, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_dontDestroyOnLoad, put = __cordl_internal_set_dontDestroyOnLoad)) bool dontDestroyOnLoad;

  /// @brief Field instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_instance, put = setStaticF_instance))::UnityW<::Photon::Pun::UtilityScripts::PlayerNumbering> instance;

  /// @brief Method Awake, addr 0x1ec5b5c, size 0x184, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::Photon::Pun::UtilityScripts::PlayerNumbering* New_ctor();

  /// @brief Method OnJoinedRoom, addr 0x1ec63c8, size 0x4, virtual true, abstract: false, final false
  inline void OnJoinedRoom();

  /// @brief Method OnLeftRoom, addr 0x1ec63cc, size 0x94, virtual true, abstract: false, final false
  inline void OnLeftRoom();

  /// @brief Method OnPlayerEnteredRoom, addr 0x1ec6460, size 0x4, virtual true, abstract: false, final false
  inline void OnPlayerEnteredRoom(::Photon::Realtime::Player* newPlayer);

  /// @brief Method OnPlayerLeftRoom, addr 0x1ec6464, size 0x4, virtual true, abstract: false, final false
  inline void OnPlayerLeftRoom(::Photon::Realtime::Player* otherPlayer);

  /// @brief Method OnPlayerPropertiesUpdate, addr 0x1ec6468, size 0x78, virtual true, abstract: false, final false
  inline void OnPlayerPropertiesUpdate(::Photon::Realtime::Player* targetPlayer, ::ExitGames::Client::Photon::Hashtable* changedProps);

  /// @brief Method RefreshData, addr 0x1ec5ce0, size 0x6e8, virtual false, abstract: false, final false
  inline void RefreshData();

  constexpr bool const& __cordl_internal_get_dontDestroyOnLoad() const;

  constexpr bool& __cordl_internal_get_dontDestroyOnLoad();

  constexpr void __cordl_internal_set_dontDestroyOnLoad(bool value);

  /// @brief Method .ctor, addr 0x1ec6964, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_OnPlayerNumberingChanged, addr 0x1ec59e4, size 0xbc, virtual false, abstract: false, final false
  static inline void add_OnPlayerNumberingChanged(::Photon::Pun::UtilityScripts::__PlayerNumbering__PlayerNumberingChanged* value);

  static inline ::Photon::Pun::UtilityScripts::__PlayerNumbering__PlayerNumberingChanged* getStaticF_OnPlayerNumberingChanged();

  static inline ::ArrayW<::Photon::Realtime::Player*, ::Array<::Photon::Realtime::Player*>*> getStaticF_SortedPlayers();

  static inline ::UnityW<::Photon::Pun::UtilityScripts::PlayerNumbering> getStaticF_instance();

  /// @brief Method remove_OnPlayerNumberingChanged, addr 0x1ec5aa0, size 0xbc, virtual false, abstract: false, final false
  static inline void remove_OnPlayerNumberingChanged(::Photon::Pun::UtilityScripts::__PlayerNumbering__PlayerNumberingChanged* value);

  static inline void setStaticF_OnPlayerNumberingChanged(::Photon::Pun::UtilityScripts::__PlayerNumbering__PlayerNumberingChanged* value);

  static inline void setStaticF_SortedPlayers(::ArrayW<::Photon::Realtime::Player*, ::Array<::Photon::Realtime::Player*>*> value);

  static inline void setStaticF_instance(::UnityW<::Photon::Pun::UtilityScripts::PlayerNumbering> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerNumbering();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerNumbering", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerNumbering(PlayerNumbering&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerNumbering", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerNumbering(PlayerNumbering const&) = delete;

  /// @brief Field dontDestroyOnLoad, offset: 0x20, size: 0x1, def value: None
  bool ___dontDestroyOnLoad;

  /// @brief Field RoomPlayerIndexedProp offset 0xffffffff size 0x8
  static constexpr ::ConstString RoomPlayerIndexedProp{ u"pNr" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::UtilityScripts::PlayerNumbering, 0x28>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::PlayerNumbering, ___dontDestroyOnLoad) == 0x20, "Offset mismatch!");

} // namespace Photon::Pun::UtilityScripts
NEED_NO_BOX(::Photon::Pun::UtilityScripts::PlayerNumbering);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::PlayerNumbering*, "Photon.Pun.UtilityScripts", "PlayerNumbering");
NEED_NO_BOX(::Photon::Pun::UtilityScripts::__PlayerNumbering__PlayerNumberingChanged);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::__PlayerNumbering__PlayerNumberingChanged*, "Photon.Pun.UtilityScripts", "PlayerNumbering/PlayerNumberingChanged");
NEED_NO_BOX(::Photon::Pun::UtilityScripts::__PlayerNumbering____c);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::__PlayerNumbering____c*, "Photon.Pun.UtilityScripts", "PlayerNumbering/<>c");
