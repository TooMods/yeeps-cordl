#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DiscoveryEndpointBase)
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
class DiscoveryEndpointBase;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::DiscoveryEndpointBase);
// Type: Amazon.Runtime.Internal::DiscoveryEndpointBase
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::DiscoveryEndpointBase*
class CORDL_TYPE DiscoveryEndpointBase : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Address, put = set_Address))::StringW Address;

  __declspec(property(get = get_CachePeriodInMinutes, put = set_CachePeriodInMinutes)) int64_t CachePeriodInMinutes;

  /// @brief Field _address, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__address, put = __cordl_internal_set__address))::StringW _address;

  /// @brief Field _cachePeriodInMinutes, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__cachePeriodInMinutes, put = __cordl_internal_set__cachePeriodInMinutes)) int64_t _cachePeriodInMinutes;

  /// @brief Field _createdOn, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__createdOn, put = __cordl_internal_set__createdOn))::System::DateTime _createdOn;

  /// @brief Field objectExtendLock, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_objectExtendLock, put = __cordl_internal_set_objectExtendLock))::System::Object* objectExtendLock;

  /// @brief Method ExtendExpiration, addr 0x23d6768, size 0x108, virtual false, abstract: false, final false
  inline void ExtendExpiration(int64_t minutes);

  /// @brief Method HasExpired, addr 0x23d66d8, size 0x90, virtual false, abstract: false, final false
  inline bool HasExpired();

  static inline ::Amazon::Runtime::Internal::DiscoveryEndpointBase* New_ctor(::StringW address, int64_t cachePeriodInMinutes);

  constexpr ::StringW const& __cordl_internal_get__address() const;

  constexpr ::StringW& __cordl_internal_get__address();

  constexpr int64_t const& __cordl_internal_get__cachePeriodInMinutes() const;

  constexpr int64_t& __cordl_internal_get__cachePeriodInMinutes();

  constexpr ::System::DateTime const& __cordl_internal_get__createdOn() const;

  constexpr ::System::DateTime& __cordl_internal_get__createdOn();

  constexpr ::System::Object*& __cordl_internal_get_objectExtendLock();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_objectExtendLock() const;

  constexpr void __cordl_internal_set__address(::StringW value);

  constexpr void __cordl_internal_set__cachePeriodInMinutes(int64_t value);

  constexpr void __cordl_internal_set__createdOn(::System::DateTime value);

  constexpr void __cordl_internal_set_objectExtendLock(::System::Object* value);

  /// @brief Method .ctor, addr 0x23d6560, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::StringW address, int64_t cachePeriodInMinutes);

  /// @brief Method get_Address, addr 0x23d66c0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Address();

  /// @brief Method get_CachePeriodInMinutes, addr 0x23d66c8, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_CachePeriodInMinutes();

  /// @brief Method set_Address, addr 0x23d661c, size 0xa4, virtual false, abstract: false, final false
  inline void set_Address(::StringW value);

  /// @brief Method set_CachePeriodInMinutes, addr 0x23d66d0, size 0x8, virtual false, abstract: false, final false
  inline void set_CachePeriodInMinutes(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DiscoveryEndpointBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DiscoveryEndpointBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DiscoveryEndpointBase(DiscoveryEndpointBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DiscoveryEndpointBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DiscoveryEndpointBase(DiscoveryEndpointBase const&) = delete;

  /// @brief Field _createdOn, offset: 0x10, size: 0x8, def value: None
  ::System::DateTime ____createdOn;

  /// @brief Field _address, offset: 0x18, size: 0x8, def value: None
  ::StringW ____address;

  /// @brief Field _cachePeriodInMinutes, offset: 0x20, size: 0x8, def value: None
  int64_t ____cachePeriodInMinutes;

  /// @brief Field objectExtendLock, offset: 0x28, size: 0x8, def value: None
  ::System::Object* ___objectExtendLock;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::DiscoveryEndpointBase, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::DiscoveryEndpointBase, ____createdOn) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::DiscoveryEndpointBase, ____address) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::DiscoveryEndpointBase, ____cachePeriodInMinutes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::DiscoveryEndpointBase, ___objectExtendLock) == 0x28, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::DiscoveryEndpointBase);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::DiscoveryEndpointBase*, "Amazon.Runtime.Internal", "DiscoveryEndpointBase");
