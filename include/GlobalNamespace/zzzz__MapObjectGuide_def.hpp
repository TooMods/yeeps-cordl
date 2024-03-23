#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MapObjectGuide)
namespace GlobalNamespace {
class __MapObjectGuide__OnOccupiedCallback;
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
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3Int;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class MapObjectGuide;
}
namespace GlobalNamespace {
class __MapObjectGuide__OnOccupiedCallback;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MapObjectGuide);
MARK_REF_PTR_T(::GlobalNamespace::__MapObjectGuide__OnOccupiedCallback);
// Type: ::OnOccupiedCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MapObjectGuide::OnOccupiedCallback*
class CORDL_TYPE __MapObjectGuide__OnOccupiedCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x30755cc, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool onMapLoad, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x3075654, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x30755b4, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(bool onMapLoad);

  static inline ::GlobalNamespace::__MapObjectGuide__OnOccupiedCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x30754f0, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MapObjectGuide__OnOccupiedCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MapObjectGuide__OnOccupiedCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MapObjectGuide__OnOccupiedCallback(__MapObjectGuide__OnOccupiedCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MapObjectGuide__OnOccupiedCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MapObjectGuide__OnOccupiedCallback(__MapObjectGuide__OnOccupiedCallback const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MapObjectGuide__OnOccupiedCallback, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::MapObjectGuide
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 105, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MapObjectGuide*
class CORDL_TYPE MapObjectGuide : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using OnOccupiedCallback = ::GlobalNamespace::__MapObjectGuide__OnOccupiedCallback;

  /// @brief Field <hasRegisteredKey>k__BackingField, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__hasRegisteredKey_k__BackingField, put = __cordl_internal_set__hasRegisteredKey_k__BackingField)) bool _hasRegisteredKey_k__BackingField;

  /// @brief Field <isOccupied>k__BackingField, offset 0x5c, size 0x1
  __declspec(property(get = __cordl_internal_get__isOccupied_k__BackingField, put = __cordl_internal_set__isOccupied_k__BackingField)) bool _isOccupied_k__BackingField;

  /// @brief Field <registeredDimensions>k__BackingField, offset 0x50, size 0xc
  __declspec(property(get = __cordl_internal_get__registeredDimensions_k__BackingField,
                      put = __cordl_internal_set__registeredDimensions_k__BackingField))::UnityEngine::Vector3Int _registeredDimensions_k__BackingField;

  /// @brief Field <registeredPosition>k__BackingField, offset 0x44, size 0xc
  __declspec(property(get = __cordl_internal_get__registeredPosition_k__BackingField,
                      put = __cordl_internal_set__registeredPosition_k__BackingField))::UnityEngine::Vector3Int _registeredPosition_k__BackingField;

  /// @brief Field hasAttemptedToRegister, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_hasAttemptedToRegister, put = __cordl_internal_set_hasAttemptedToRegister)) bool hasAttemptedToRegister;

  __declspec(property(get = get_hasRegisteredKey, put = set_hasRegisteredKey)) bool hasRegisteredKey;

  __declspec(property(get = get_isOccupied, put = set_isOccupied)) bool isOccupied;

  /// @brief Field meshRenderer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_meshRenderer, put = __cordl_internal_set_meshRenderer))::UnityW<::UnityEngine::MeshRenderer> meshRenderer;

  /// @brief Field onOccupiedCallbacks, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_onOccupiedCallbacks, put = __cordl_internal_set_onOccupiedCallbacks))::GlobalNamespace::__MapObjectGuide__OnOccupiedCallback* onOccupiedCallbacks;

  /// @brief Field placementParticles, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_placementParticles, put = __cordl_internal_set_placementParticles))::UnityW<::UnityEngine::ParticleSystem> placementParticles;

  /// @brief Field placementSoundKey, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_placementSoundKey, put = __cordl_internal_set_placementSoundKey))::StringW placementSoundKey;

  __declspec(property(get = get_registeredDimensions, put = set_registeredDimensions))::UnityEngine::Vector3Int registeredDimensions;

  __declspec(property(get = get_registeredPosition, put = set_registeredPosition))::UnityEngine::Vector3Int registeredPosition;

  /// @brief Field size, offset 0x18, size 0xc
  __declspec(property(get = __cordl_internal_get_size, put = __cordl_internal_set_size))::UnityEngine::Vector3Int size;

  /// @brief Method ClearRegisteredKey, addr 0x3075340, size 0x8, virtual false, abstract: false, final false
  inline void ClearRegisteredKey();

  /// @brief Method GetWorldTransformation, addr 0x30752a8, size 0x7c, virtual false, abstract: false, final false
  inline void GetWorldTransformation(ByRef<::UnityEngine::Vector3> position, ByRef<::UnityEngine::Quaternion> rotation, ByRef<::UnityEngine::Vector3Int> size);

  static inline ::GlobalNamespace::MapObjectGuide* New_ctor();

  /// @brief Method OnDisable, addr 0x30751fc, size 0xac, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x3075170, size 0x8c, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnNoLongerOccupied, addr 0x30754c0, size 0x28, virtual false, abstract: false, final false
  inline void OnNoLongerOccupied();

  /// @brief Method OnOccupied, addr 0x3075348, size 0x178, virtual false, abstract: false, final false
  inline void OnOccupied(bool onMapLoad);

  /// @brief Method SetRegisteredKey, addr 0x3075324, size 0x1c, virtual false, abstract: false, final false
  inline void SetRegisteredKey(::UnityEngine::Vector3Int registeredPosition, ::UnityEngine::Vector3Int registeredDimensions);

  constexpr bool const& __cordl_internal_get__hasRegisteredKey_k__BackingField() const;

  constexpr bool& __cordl_internal_get__hasRegisteredKey_k__BackingField();

  constexpr bool const& __cordl_internal_get__isOccupied_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isOccupied_k__BackingField();

  constexpr ::UnityEngine::Vector3Int const& __cordl_internal_get__registeredDimensions_k__BackingField() const;

  constexpr ::UnityEngine::Vector3Int& __cordl_internal_get__registeredDimensions_k__BackingField();

  constexpr ::UnityEngine::Vector3Int const& __cordl_internal_get__registeredPosition_k__BackingField() const;

  constexpr ::UnityEngine::Vector3Int& __cordl_internal_get__registeredPosition_k__BackingField();

  constexpr bool const& __cordl_internal_get_hasAttemptedToRegister() const;

  constexpr bool& __cordl_internal_get_hasAttemptedToRegister();

  constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_meshRenderer() const;

  constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_meshRenderer();

  constexpr ::GlobalNamespace::__MapObjectGuide__OnOccupiedCallback*& __cordl_internal_get_onOccupiedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MapObjectGuide__OnOccupiedCallback*> const& __cordl_internal_get_onOccupiedCallbacks() const;

  constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_placementParticles() const;

  constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_placementParticles();

  constexpr ::StringW const& __cordl_internal_get_placementSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_placementSoundKey();

  constexpr ::UnityEngine::Vector3Int const& __cordl_internal_get_size() const;

  constexpr ::UnityEngine::Vector3Int& __cordl_internal_get_size();

  constexpr void __cordl_internal_set__hasRegisteredKey_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isOccupied_k__BackingField(bool value);

  constexpr void __cordl_internal_set__registeredDimensions_k__BackingField(::UnityEngine::Vector3Int value);

  constexpr void __cordl_internal_set__registeredPosition_k__BackingField(::UnityEngine::Vector3Int value);

  constexpr void __cordl_internal_set_hasAttemptedToRegister(bool value);

  constexpr void __cordl_internal_set_meshRenderer(::UnityW<::UnityEngine::MeshRenderer> value);

  constexpr void __cordl_internal_set_onOccupiedCallbacks(::GlobalNamespace::__MapObjectGuide__OnOccupiedCallback* value);

  constexpr void __cordl_internal_set_placementParticles(::UnityW<::UnityEngine::ParticleSystem> value);

  constexpr void __cordl_internal_set_placementSoundKey(::StringW value);

  constexpr void __cordl_internal_set_size(::UnityEngine::Vector3Int value);

  /// @brief Method .ctor, addr 0x30754e8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_hasRegisteredKey, addr 0x3075110, size 0x8, virtual false, abstract: false, final false
  inline bool get_hasRegisteredKey();

  /// @brief Method get_isOccupied, addr 0x307515c, size 0x8, virtual false, abstract: false, final false
  inline bool get_isOccupied();

  /// @brief Method get_registeredDimensions, addr 0x3075140, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3Int get_registeredDimensions();

  /// @brief Method get_registeredPosition, addr 0x3075124, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3Int get_registeredPosition();

  /// @brief Method set_hasRegisteredKey, addr 0x3075118, size 0xc, virtual false, abstract: false, final false
  inline void set_hasRegisteredKey(bool value);

  /// @brief Method set_isOccupied, addr 0x3075164, size 0xc, virtual false, abstract: false, final false
  inline void set_isOccupied(bool value);

  /// @brief Method set_registeredDimensions, addr 0x3075150, size 0xc, virtual false, abstract: false, final false
  inline void set_registeredDimensions(::UnityEngine::Vector3Int value);

  /// @brief Method set_registeredPosition, addr 0x3075134, size 0xc, virtual false, abstract: false, final false
  inline void set_registeredPosition(::UnityEngine::Vector3Int value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MapObjectGuide();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MapObjectGuide", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MapObjectGuide(MapObjectGuide&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MapObjectGuide", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MapObjectGuide(MapObjectGuide const&) = delete;

  /// @brief Field size, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3Int ___size;

  /// @brief Field placementParticles, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> ___placementParticles;

  /// @brief Field meshRenderer, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshRenderer> ___meshRenderer;

  /// @brief Field placementSoundKey, offset: 0x38, size: 0x8, def value: None
  ::StringW ___placementSoundKey;

  /// @brief Field <hasRegisteredKey>k__BackingField, offset: 0x40, size: 0x1, def value: None
  bool ____hasRegisteredKey_k__BackingField;

  /// @brief Field <registeredPosition>k__BackingField, offset: 0x44, size: 0xc, def value: None
  ::UnityEngine::Vector3Int ____registeredPosition_k__BackingField;

  /// @brief Field <registeredDimensions>k__BackingField, offset: 0x50, size: 0xc, def value: None
  ::UnityEngine::Vector3Int ____registeredDimensions_k__BackingField;

  /// @brief Field <isOccupied>k__BackingField, offset: 0x5c, size: 0x1, def value: None
  bool ____isOccupied_k__BackingField;

  /// @brief Field onOccupiedCallbacks, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::__MapObjectGuide__OnOccupiedCallback* ___onOccupiedCallbacks;

  /// @brief Field hasAttemptedToRegister, offset: 0x68, size: 0x1, def value: None
  bool ___hasAttemptedToRegister;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MapObjectGuide, 0x70>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectGuide, ___size) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectGuide, ___placementParticles) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectGuide, ___meshRenderer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectGuide, ___placementSoundKey) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectGuide, ____hasRegisteredKey_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectGuide, ____registeredPosition_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectGuide, ____registeredDimensions_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectGuide, ____isOccupied_k__BackingField) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectGuide, ___onOccupiedCallbacks) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectGuide, ___hasAttemptedToRegister) == 0x68, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MapObjectGuide);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MapObjectGuide*, "", "MapObjectGuide");
NEED_NO_BOX(::GlobalNamespace::__MapObjectGuide__OnOccupiedCallback);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MapObjectGuide__OnOccupiedCallback*, "", "MapObjectGuide/OnOccupiedCallback");
