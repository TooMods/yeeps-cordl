#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GameObjectUtils)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace Unity::XR::CoreUtils {
class __GameObjectUtils____c__DisplayClass20_0;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class GameObjectUtils;
}
namespace Unity::XR::CoreUtils {
class __GameObjectUtils____c__DisplayClass20_0;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::CoreUtils::GameObjectUtils);
MARK_REF_PTR_T(::Unity::XR::CoreUtils::__GameObjectUtils____c__DisplayClass20_0);
// Type: ::<>c__DisplayClass20_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: ::GameObjectUtils::<>c__DisplayClass20_0*
class CORDL_TYPE __GameObjectUtils____c__DisplayClass20_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name))::StringW name;

  static inline ::Unity::XR::CoreUtils::__GameObjectUtils____c__DisplayClass20_0* New_ctor();

  /// @brief Method <GetNamedChild>b__0, addr 0x2878518, size 0x2c, virtual false, abstract: false, final false
  inline bool _GetNamedChild_b__0(::UnityEngine::Transform* currentTransform);

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr void __cordl_internal_set_name(::StringW value);

  /// @brief Method .ctor, addr 0x2878438, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameObjectUtils____c__DisplayClass20_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GameObjectUtils____c__DisplayClass20_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameObjectUtils____c__DisplayClass20_0(__GameObjectUtils____c__DisplayClass20_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameObjectUtils____c__DisplayClass20_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameObjectUtils____c__DisplayClass20_0(__GameObjectUtils____c__DisplayClass20_0 const&) = delete;

  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___name;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::__GameObjectUtils____c__DisplayClass20_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::XR::CoreUtils::__GameObjectUtils____c__DisplayClass20_0, ___name) == 0x10, "Offset mismatch!");

} // namespace Unity::XR::CoreUtils
// Type: Unity.XR.CoreUtils::GameObjectUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils::GameObjectUtils*
class CORDL_TYPE GameObjectUtils : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass20_0 = ::Unity::XR::CoreUtils::__GameObjectUtils____c__DisplayClass20_0;

  /// @brief Field GameObjectInstantiated, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GameObjectInstantiated, put = setStaticF_GameObjectInstantiated))::System::Action_1<::UnityW<::UnityEngine::GameObject>>* GameObjectInstantiated;

  /// @brief Field k_GameObjects, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_GameObjects, put = setStaticF_k_GameObjects))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* k_GameObjects;

  /// @brief Field k_Transforms, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_Transforms, put = setStaticF_k_Transforms))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* k_Transforms;

  /// @brief Method CloneWithHideFlags, addr 0x2877f10, size 0xbc, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> CloneWithHideFlags(::UnityEngine::GameObject* original, ::UnityEngine::Transform* parent);

  /// @brief Method CopyHideFlagsRecursively, addr 0x2877fcc, size 0x134, virtual false, abstract: false, final false
  static inline void CopyHideFlagsRecursively(::UnityEngine::GameObject* copyFrom, ::UnityEngine::GameObject* copyTo);

  /// @brief Method Create, addr 0x2877ab0, size 0xa4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> Create();

  /// @brief Method Create, addr 0x2877b54, size 0xac, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> Create(::StringW name);

  /// @brief Method ExhaustiveComponentSearch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T ExhaustiveComponentSearch(::UnityEngine::GameObject* desiredSource);

  /// @brief Method ExhaustiveTaggedComponentSearch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T ExhaustiveTaggedComponentSearch(::UnityEngine::GameObject* desiredSource, ::StringW tag);

  /// @brief Method GetChildGameObjects, addr 0x2878100, size 0x12c, virtual false, abstract: false, final false
  static inline void GetChildGameObjects(::UnityEngine::GameObject* go, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* childGameObjects);

  /// @brief Method GetComponentInActiveScene, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T GetComponentInActiveScene();

  /// @brief Method GetComponentInScene, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T GetComponentInScene(::UnityEngine::SceneManagement::Scene scene);

  /// @brief Method GetComponentsInActiveScene, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void GetComponentsInActiveScene(::System::Collections::Generic::List_1<T>* components, bool includeInactive);

  /// @brief Method GetComponentsInAllScenes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void GetComponentsInAllScenes(::System::Collections::Generic::List_1<T>* components, bool includeInactive);

  /// @brief Method GetComponentsInScene, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void GetComponentsInScene(::UnityEngine::SceneManagement::Scene scene, ::System::Collections::Generic::List_1<T>* components, bool includeInactive);

  /// @brief Method GetNamedChild, addr 0x287822c, size 0x20c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> GetNamedChild(::UnityEngine::GameObject* go, ::StringW name);

  /// @brief Method Instantiate, addr 0x2877db8, size 0x158, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> Instantiate(::UnityEngine::GameObject* original, ::UnityEngine::Transform* parent, ::UnityEngine::Vector3 position,
                                                                ::UnityEngine::Quaternion rotation);

  /// @brief Method Instantiate, addr 0x2877c00, size 0x108, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> Instantiate(::UnityEngine::GameObject* original, ::UnityEngine::Transform* parent, bool worldPositionStays);

  /// @brief Method Instantiate, addr 0x2877d08, size 0xb0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> Instantiate(::UnityEngine::GameObject* original, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  /// @brief Method add_GameObjectInstantiated, addr 0x28778c8, size 0xf4, virtual false, abstract: false, final false
  static inline void add_GameObjectInstantiated(::System::Action_1<::UnityW<::UnityEngine::GameObject>>* value);

  static inline ::System::Action_1<::UnityW<::UnityEngine::GameObject>>* getStaticF_GameObjectInstantiated();

  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* getStaticF_k_GameObjects();

  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* getStaticF_k_Transforms();

  /// @brief Method remove_GameObjectInstantiated, addr 0x28779bc, size 0xf4, virtual false, abstract: false, final false
  static inline void remove_GameObjectInstantiated(::System::Action_1<::UnityW<::UnityEngine::GameObject>>* value);

  static inline void setStaticF_GameObjectInstantiated(::System::Action_1<::UnityW<::UnityEngine::GameObject>>* value);

  static inline void setStaticF_k_GameObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* value);

  static inline void setStaticF_k_Transforms(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameObjectUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameObjectUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameObjectUtils(GameObjectUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameObjectUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameObjectUtils(GameObjectUtils const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::GameObjectUtils, 0x10>, "Size mismatch!");

} // namespace Unity::XR::CoreUtils
NEED_NO_BOX(::Unity::XR::CoreUtils::GameObjectUtils);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::GameObjectUtils*, "Unity.XR.CoreUtils", "GameObjectUtils");
NEED_NO_BOX(::Unity::XR::CoreUtils::__GameObjectUtils____c__DisplayClass20_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::__GameObjectUtils____c__DisplayClass20_0*, "Unity.XR.CoreUtils", "GameObjectUtils/<>c__DisplayClass20_0");
