#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(TeleportationMonitor)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling {
template <typename T> class LinkedPool_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class __TeleportationMonitor____c;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class LocomotionProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class LocomotionSystem;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class TeleportationProvider;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class TeleportationMonitor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class __TeleportationMonitor____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor);
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::__TeleportationMonitor____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// Is value type: false
// CS Name: ::TeleportationMonitor::<>c*
class CORDL_TYPE __TeleportationMonitor____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::XR::Interaction::Toolkit::Utilities::__TeleportationMonitor____c* __9;

  static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::__TeleportationMonitor____c* New_ctor();

  /// @brief Method <.cctor>b__16_0, addr 0x3020dc0, size 0x70, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider>,
                                                      ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>*>*
  __cctor_b__16_0();

  /// @brief Method <.cctor>b__16_1, addr 0x3020e30, size 0x70, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>, ::UnityEngine::Pose>* __cctor_b__16_1();

  /// @brief Method .ctor, addr 0x3020db8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::__TeleportationMonitor____c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::XR::Interaction::Toolkit::Utilities::__TeleportationMonitor____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TeleportationMonitor____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TeleportationMonitor____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TeleportationMonitor____c(__TeleportationMonitor____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TeleportationMonitor____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TeleportationMonitor____c(__TeleportationMonitor____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Utilities::__TeleportationMonitor____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Utilities
// Type: UnityEngine.XR.Interaction.Toolkit.Utilities::TeleportationMonitor
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Utilities::TeleportationMonitor*
class CORDL_TYPE TeleportationMonitor : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::XR::Interaction::Toolkit::Utilities::__TeleportationMonitor____c;

  /// @brief Field m_OriginPosesBeforeTeleport, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OriginPosesBeforeTeleport,
                      put = __cordl_internal_set_m_OriginPosesBeforeTeleport))::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>,
                                                                                                                           ::UnityEngine::Pose>* m_OriginPosesBeforeTeleport;

  /// @brief Field m_TeleportInteractors, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TeleportInteractors, put = __cordl_internal_set_m_TeleportInteractors))::System::Collections::Generic::Dictionary_2<
      ::UnityW<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider>,
      ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>*>* m_TeleportInteractors;

  /// @brief Field s_OriginPosesBeforeTeleportPool, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_OriginPosesBeforeTeleportPool, put = setStaticF_s_OriginPosesBeforeTeleportPool))::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::
      LinkedPool_1<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>, ::UnityEngine::Pose>*>* s_OriginPosesBeforeTeleportPool;

  /// @brief Field s_TeleportInteractorsPool, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_TeleportInteractorsPool, put = setStaticF_s_TeleportInteractorsPool))::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<
      ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider>,
                                                   ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>*>*>* s_TeleportInteractorsPool;

  /// @brief Field s_TeleportationProvidersCache, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_TeleportationProvidersCache,
                             put = setStaticF_s_TeleportationProvidersCache))::ArrayW<::UnityW<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider>,
                                                                                      ::Array<::UnityW<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider>>*> s_TeleportationProvidersCache;

  /// @brief Field teleported, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_teleported, put = __cordl_internal_set_teleported))::System::Action_1<::UnityEngine::Pose>* teleported;

  /// @brief Method AddInteractor, addr 0x301fdc0, size 0x428, virtual false, abstract: false, final false
  inline void AddInteractor(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor);

  /// @brief Method FindTeleportationProviders, addr 0x30201e8, size 0xf4, virtual false, abstract: false, final false
  static inline bool FindTeleportationProviders();

  static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor* New_ctor();

  /// @brief Method OnBeginTeleportation, addr 0x302084c, size 0x124, virtual false, abstract: false, final false
  inline void OnBeginTeleportation(::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem* locomotionSystem);

  /// @brief Method OnEndTeleportation, addr 0x3020970, size 0x200, virtual false, abstract: false, final false
  inline void OnEndTeleportation(::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem* locomotionSystem);

  /// @brief Method RemoveInteractor, addr 0x302039c, size 0x3e8, virtual false, abstract: false, final false
  inline void RemoveInteractor(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor);

  /// @brief Method TryGetOriginTransform, addr 0x30202dc, size 0xc0, virtual false, abstract: false, final false
  static inline bool TryGetOriginTransform(::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider* locomotionProvider, ByRef<::UnityEngine::Transform*> originTransform);

  /// @brief Method TryGetOriginTransform, addr 0x3020784, size 0xc8, virtual false, abstract: false, final false
  static inline bool TryGetOriginTransform(::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem* system, ByRef<::UnityEngine::Transform*> originTransform);

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>, ::UnityEngine::Pose>*& __cordl_internal_get_m_OriginPosesBeforeTeleport();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>, ::UnityEngine::Pose>*> const&
  __cordl_internal_get_m_OriginPosesBeforeTeleport() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider>,
                                                         ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>*>*&
  __cordl_internal_get_m_TeleportInteractors();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider>,
                                                                                             ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>*>*> const&
  __cordl_internal_get_m_TeleportInteractors() const;

  constexpr ::System::Action_1<::UnityEngine::Pose>*& __cordl_internal_get_teleported();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::Pose>*> const& __cordl_internal_get_teleported() const;

  constexpr void
  __cordl_internal_set_m_OriginPosesBeforeTeleport(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>, ::UnityEngine::Pose>* value);

  constexpr void
  __cordl_internal_set_m_TeleportInteractors(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider>,
                                                                                          ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>*>* value);

  constexpr void __cordl_internal_set_teleported(::System::Action_1<::UnityEngine::Pose>* value);

  /// @brief Method .ctor, addr 0x3020b70, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_teleported, addr 0x301fc60, size 0xb0, virtual false, abstract: false, final false
  inline void add_teleported(::System::Action_1<::UnityEngine::Pose>* value);

  static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<
      ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>, ::UnityEngine::Pose>*>*
  getStaticF_s_OriginPosesBeforeTeleportPool();

  static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::System::Collections::Generic::Dictionary_2<
      ::UnityW<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider>, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>*>*>*
  getStaticF_s_TeleportInteractorsPool();

  static inline ::ArrayW<::UnityW<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider>, ::Array<::UnityW<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider>>*>
  getStaticF_s_TeleportationProvidersCache();

  /// @brief Method remove_teleported, addr 0x301fd10, size 0xb0, virtual false, abstract: false, final false
  inline void remove_teleported(::System::Action_1<::UnityEngine::Pose>* value);

  static inline void
  setStaticF_s_OriginPosesBeforeTeleportPool(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<
                                             ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>, ::UnityEngine::Pose>*>* value);

  static inline void setStaticF_s_TeleportInteractorsPool(
      ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::System::Collections::Generic::Dictionary_2<
          ::UnityW<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider>, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>*>*>* value);

  static inline void setStaticF_s_TeleportationProvidersCache(
      ::ArrayW<::UnityW<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider>, ::Array<::UnityW<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider>>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TeleportationMonitor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TeleportationMonitor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TeleportationMonitor(TeleportationMonitor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TeleportationMonitor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TeleportationMonitor(TeleportationMonitor const&) = delete;

  /// @brief Field teleported, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::Pose>* ___teleported;

  /// @brief Field m_TeleportInteractors, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider>,
                                               ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>*>* ___m_TeleportInteractors;

  /// @brief Field m_OriginPosesBeforeTeleport, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>, ::UnityEngine::Pose>* ___m_OriginPosesBeforeTeleport;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor, ___teleported) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor, ___m_TeleportInteractors) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor, ___m_OriginPosesBeforeTeleport) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Utilities
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*, "UnityEngine.XR.Interaction.Toolkit.Utilities", "TeleportationMonitor");
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Utilities::__TeleportationMonitor____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Utilities::__TeleportationMonitor____c*, "UnityEngine.XR.Interaction.Toolkit.Utilities", "TeleportationMonitor/<>c");
