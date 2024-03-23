#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/zzzz__MonoBehaviourPun_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OnClickDestroy)
namespace Photon::Pun::UtilityScripts {
class __OnClickDestroy___DestroyRpc_d__4;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IPointerClickHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class OnClickDestroy;
}
namespace Photon::Pun::UtilityScripts {
class __OnClickDestroy___DestroyRpc_d__4;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::UtilityScripts::OnClickDestroy);
MARK_REF_PTR_T(::Photon::Pun::UtilityScripts::__OnClickDestroy___DestroyRpc_d__4);
// Type: ::<DestroyRpc>d__4
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: ::OnClickDestroy::<DestroyRpc>d__4*
class CORDL_TYPE __OnClickDestroy___DestroyRpc_d__4 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::Photon::Pun::UtilityScripts::OnClickDestroy> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x1ec8bdc, size 0xe0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Photon::Pun::UtilityScripts::__OnClickDestroy___DestroyRpc_d__4* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1ec8cbc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x1ec8cc4, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1ec8d04, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x1ec8bd8, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::Photon::Pun::UtilityScripts::OnClickDestroy> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::Photon::Pun::UtilityScripts::OnClickDestroy>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::Photon::Pun::UtilityScripts::OnClickDestroy> value);

  /// @brief Method .ctor, addr 0x1ec8ba8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OnClickDestroy___DestroyRpc_d__4();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OnClickDestroy___DestroyRpc_d__4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OnClickDestroy___DestroyRpc_d__4(__OnClickDestroy___DestroyRpc_d__4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OnClickDestroy___DestroyRpc_d__4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OnClickDestroy___DestroyRpc_d__4(__OnClickDestroy___DestroyRpc_d__4 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::Photon::Pun::UtilityScripts::OnClickDestroy> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::UtilityScripts::__OnClickDestroy___DestroyRpc_d__4, 0x28>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::__OnClickDestroy___DestroyRpc_d__4, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::__OnClickDestroy___DestroyRpc_d__4, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::__OnClickDestroy___DestroyRpc_d__4, _____4__this) == 0x20, "Offset mismatch!");

} // namespace Photon::Pun::UtilityScripts
// Type: Photon.Pun.UtilityScripts::OnClickDestroy
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: ::Photon.Pun.UtilityScripts::OnClickDestroy*
class CORDL_TYPE OnClickDestroy : public ::Photon::Pun::MonoBehaviourPun {
public:
  // Declarations
  using _DestroyRpc_d__4 = ::Photon::Pun::UtilityScripts::__OnClickDestroy___DestroyRpc_d__4;

  /// @brief Field Button, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_Button, put = __cordl_internal_set_Button))::UnityEngine::EventSystems::__PointerEventData__InputButton Button;

  /// @brief Field DestroyByRpc, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_DestroyByRpc, put = __cordl_internal_set_DestroyByRpc)) bool DestroyByRpc;

  /// @brief Field ModifierKey, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_ModifierKey, put = __cordl_internal_set_ModifierKey))::UnityEngine::KeyCode ModifierKey;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerClickHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerClickHandler*() noexcept;

  /// @brief Method DestroyRpc, addr 0x1ec8b40, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* DestroyRpc();

  static inline ::Photon::Pun::UtilityScripts::OnClickDestroy* New_ctor();

  /// @brief Method UnityEngine.EventSystems.IPointerClickHandler.OnPointerClick, addr 0x1ec89c0, size 0x180, virtual true, abstract: false, final true
  inline void UnityEngine_EventSystems_IPointerClickHandler_OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData);

  constexpr ::UnityEngine::EventSystems::__PointerEventData__InputButton const& __cordl_internal_get_Button() const;

  constexpr ::UnityEngine::EventSystems::__PointerEventData__InputButton& __cordl_internal_get_Button();

  constexpr bool const& __cordl_internal_get_DestroyByRpc() const;

  constexpr bool& __cordl_internal_get_DestroyByRpc();

  constexpr ::UnityEngine::KeyCode const& __cordl_internal_get_ModifierKey() const;

  constexpr ::UnityEngine::KeyCode& __cordl_internal_get_ModifierKey();

  constexpr void __cordl_internal_set_Button(::UnityEngine::EventSystems::__PointerEventData__InputButton value);

  constexpr void __cordl_internal_set_DestroyByRpc(bool value);

  constexpr void __cordl_internal_set_ModifierKey(::UnityEngine::KeyCode value);

  /// @brief Method .ctor, addr 0x1ec8bd0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerClickHandler"
  constexpr ::UnityEngine::EventSystems::IPointerClickHandler* i___UnityEngine__EventSystems__IPointerClickHandler() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OnClickDestroy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OnClickDestroy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OnClickDestroy(OnClickDestroy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OnClickDestroy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OnClickDestroy(OnClickDestroy const&) = delete;

  /// @brief Field Button, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::EventSystems::__PointerEventData__InputButton ___Button;

  /// @brief Field ModifierKey, offset: 0x24, size: 0x4, def value: None
  ::UnityEngine::KeyCode ___ModifierKey;

  /// @brief Field DestroyByRpc, offset: 0x28, size: 0x1, def value: None
  bool ___DestroyByRpc;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::UtilityScripts::OnClickDestroy, 0x30>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::OnClickDestroy, ___Button) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::OnClickDestroy, ___ModifierKey) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::OnClickDestroy, ___DestroyByRpc) == 0x28, "Offset mismatch!");

} // namespace Photon::Pun::UtilityScripts
NEED_NO_BOX(::Photon::Pun::UtilityScripts::OnClickDestroy);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::OnClickDestroy*, "Photon.Pun.UtilityScripts", "OnClickDestroy");
NEED_NO_BOX(::Photon::Pun::UtilityScripts::__OnClickDestroy___DestroyRpc_d__4);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::__OnClickDestroy___DestroyRpc_d__4*, "Photon.Pun.UtilityScripts", "OnClickDestroy/<DestroyRpc>d__4");
