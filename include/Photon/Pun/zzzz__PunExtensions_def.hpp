#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PunExtensions)
namespace Photon::Pun {
class PhotonView;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System {
class Type;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Photon::Pun {
class PunExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::PunExtensions);
// Type: Photon.Pun::PunExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Pun {
// Is value type: false
// CS Name: ::Photon.Pun::PunExtensions*
class CORDL_TYPE PunExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Field ParametersOfMethods, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ParametersOfMethods, put = setStaticF_ParametersOfMethods))::System::Collections::Generic::Dictionary_2<
      ::System::Reflection::MethodInfo*, ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*>>* ParametersOfMethods;

  /// @brief Method AlmostEquals, addr 0x2603174, size 0x70, virtual false, abstract: false, final false
  static inline bool AlmostEquals(::UnityEngine::Quaternion target, ::UnityEngine::Quaternion second, float_t maxAngle);

  /// @brief Method AlmostEquals, addr 0x2603154, size 0x20, virtual false, abstract: false, final false
  static inline bool AlmostEquals(::UnityEngine::Vector2 target, ::UnityEngine::Vector2 second, float_t sqrMagnitudePrecision);

  /// @brief Method AlmostEquals, addr 0x2603128, size 0x2c, virtual false, abstract: false, final false
  static inline bool AlmostEquals(::UnityEngine::Vector3 target, ::UnityEngine::Vector3 second, float_t sqrMagnitudePrecision);

  /// @brief Method AlmostEquals, addr 0x26031e4, size 0x10, virtual false, abstract: false, final false
  static inline bool AlmostEquals(float_t target, float_t second, float_t floatDiff);

  /// @brief Method CheckIsAssignableFrom, addr 0x26031f4, size 0x20, virtual false, abstract: false, final false
  static inline bool CheckIsAssignableFrom(::System::Type* to, ::System::Type* from);

  /// @brief Method CheckIsInterface, addr 0x2603214, size 0x14, virtual false, abstract: false, final false
  static inline bool CheckIsInterface(::System::Type* to);

  /// @brief Method GetCachedParemeters, addr 0x2602f84, size 0x100, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> GetCachedParemeters(::System::Reflection::MethodInfo* mo);

  /// @brief Method GetPhotonView, addr 0x26030d8, size 0x50, virtual false, abstract: false, final false
  static inline ::UnityW<::Photon::Pun::PhotonView> GetPhotonView(::UnityEngine::GameObject* go);

  /// @brief Method GetPhotonViewsInChildren, addr 0x2603084, size 0x54, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::Photon::Pun::PhotonView>, ::Array<::UnityW<::Photon::Pun::PhotonView>>*> GetPhotonViewsInChildren(::UnityEngine::GameObject* go);

  static inline ::System::Collections::Generic::Dictionary_2<::System::Reflection::MethodInfo*, ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*>>*
  getStaticF_ParametersOfMethods();

  static inline void setStaticF_ParametersOfMethods(
      ::System::Collections::Generic::Dictionary_2<::System::Reflection::MethodInfo*, ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PunExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PunExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PunExtensions(PunExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PunExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PunExtensions(PunExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::PunExtensions, 0x10>, "Size mismatch!");

} // namespace Photon::Pun
NEED_NO_BOX(::Photon::Pun::PunExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::PunExtensions*, "Photon.Pun", "PunExtensions");
