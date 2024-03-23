#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Collision)
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
struct ContactPoint;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Collision;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Collision);
// Type: UnityEngine::Collision
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::Collision*
class CORDL_TYPE Collision : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_collider))::UnityW<::UnityEngine::Collider> collider;

  __declspec(property(get = get_contactCount)) int32_t contactCount;

  __declspec(property(get = get_contacts))::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*> contacts;

  __declspec(property(get = get_gameObject))::UnityW<::UnityEngine::GameObject> gameObject;

  /// @brief Field m_Body, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Body, put = __cordl_internal_set_m_Body))::UnityW<::UnityEngine::Component> m_Body;

  /// @brief Field m_Collider, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Collider, put = __cordl_internal_set_m_Collider))::UnityW<::UnityEngine::Collider> m_Collider;

  /// @brief Field m_ContactCount, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ContactCount, put = __cordl_internal_set_m_ContactCount)) int32_t m_ContactCount;

  /// @brief Field m_Impulse, offset 0x10, size 0xc
  __declspec(property(get = __cordl_internal_get_m_Impulse, put = __cordl_internal_set_m_Impulse))::UnityEngine::Vector3 m_Impulse;

  /// @brief Field m_LegacyContacts, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LegacyContacts,
                      put = __cordl_internal_set_m_LegacyContacts))::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*> m_LegacyContacts;

  /// @brief Field m_RelativeVelocity, offset 0x1c, size 0xc
  __declspec(property(get = __cordl_internal_get_m_RelativeVelocity, put = __cordl_internal_set_m_RelativeVelocity))::UnityEngine::Vector3 m_RelativeVelocity;

  /// @brief Field m_ReusedContacts, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ReusedContacts,
                      put = __cordl_internal_set_m_ReusedContacts))::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*> m_ReusedContacts;

  __declspec(property(get = get_relativeVelocity))::UnityEngine::Vector3 relativeVelocity;

  constexpr ::UnityW<::UnityEngine::Component> const& __cordl_internal_get_m_Body() const;

  constexpr ::UnityW<::UnityEngine::Component>& __cordl_internal_get_m_Body();

  constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_m_Collider() const;

  constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_m_Collider();

  constexpr int32_t const& __cordl_internal_get_m_ContactCount() const;

  constexpr int32_t& __cordl_internal_get_m_ContactCount();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_Impulse() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_Impulse();

  constexpr ::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*> const& __cordl_internal_get_m_LegacyContacts() const;

  constexpr ::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*>& __cordl_internal_get_m_LegacyContacts();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_RelativeVelocity() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_RelativeVelocity();

  constexpr ::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*> const& __cordl_internal_get_m_ReusedContacts() const;

  constexpr ::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*>& __cordl_internal_get_m_ReusedContacts();

  constexpr void __cordl_internal_set_m_Body(::UnityW<::UnityEngine::Component> value);

  constexpr void __cordl_internal_set_m_Collider(::UnityW<::UnityEngine::Collider> value);

  constexpr void __cordl_internal_set_m_ContactCount(int32_t value);

  constexpr void __cordl_internal_set_m_Impulse(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_LegacyContacts(::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*> value);

  constexpr void __cordl_internal_set_m_RelativeVelocity(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_ReusedContacts(::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*> value);

  /// @brief Method get_collider, addr 0x28f891c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Collider> get_collider();

  /// @brief Method get_contactCount, addr 0x28f89a4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_contactCount();

  /// @brief Method get_contacts, addr 0x28f89ac, size 0x74, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*> get_contacts();

  /// @brief Method get_gameObject, addr 0x28f8924, size 0x80, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_gameObject();

  /// @brief Method get_relativeVelocity, addr 0x28f8910, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_relativeVelocity();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Collision();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Collision", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Collision(Collision&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Collision", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Collision(Collision const&) = delete;

  /// @brief Field m_Impulse, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_Impulse;

  /// @brief Field m_RelativeVelocity, offset: 0x1c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_RelativeVelocity;

  /// @brief Field m_Body, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Component> ___m_Body;

  /// @brief Field m_Collider, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Collider> ___m_Collider;

  /// @brief Field m_ContactCount, offset: 0x38, size: 0x4, def value: None
  int32_t ___m_ContactCount;

  /// @brief Field m_ReusedContacts, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*> ___m_ReusedContacts;

  /// @brief Field m_LegacyContacts, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*> ___m_LegacyContacts;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Collision, 0x50>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Collision, ___m_Impulse) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Collision, ___m_RelativeVelocity) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Collision, ___m_Body) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Collision, ___m_Collider) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Collision, ___m_ContactCount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Collision, ___m_ReusedContacts) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Collision, ___m_LegacyContacts) == 0x48, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Collision);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Collision*, "UnityEngine", "Collision");
