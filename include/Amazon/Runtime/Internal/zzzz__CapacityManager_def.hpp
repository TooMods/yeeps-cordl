#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CapacityManager)
namespace Amazon::Runtime::Internal {
class RetryCapacity;
}
namespace Amazon::Runtime::Internal {
struct __CapacityManager__CapacityType;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Threading {
class ReaderWriterLockSlim;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
struct __CapacityManager__CapacityType;
}
namespace Amazon::Runtime::Internal {
class CapacityManager;
}
// Write type traits
MARK_VAL_T(::Amazon::Runtime::Internal::__CapacityManager__CapacityType);
MARK_REF_PTR_T(::Amazon::Runtime::Internal::CapacityManager);
// Type: ::CapacityType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: true
// CS Name: ::CapacityManager::CapacityType
struct CORDL_TYPE __CapacityManager__CapacityType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____CapacityManager__CapacityType_Unwrapped
  enum struct ____CapacityManager__CapacityType_Unwrapped : int32_t {
    __E_Increment = static_cast<int32_t>(0x0),
    __E_Retry = static_cast<int32_t>(0x1),
    __E_Timeout = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____CapacityManager__CapacityType_Unwrapped() const noexcept {
    return static_cast<____CapacityManager__CapacityType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CapacityManager__CapacityType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __CapacityManager__CapacityType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Increment value: static_cast<int32_t>(0x0)
  static ::Amazon::Runtime::Internal::__CapacityManager__CapacityType const Increment;

  /// @brief Field Retry value: static_cast<int32_t>(0x1)
  static ::Amazon::Runtime::Internal::__CapacityManager__CapacityType const Retry;

  /// @brief Field Timeout value: static_cast<int32_t>(0x2)
  static ::Amazon::Runtime::Internal::__CapacityManager__CapacityType const Timeout;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::__CapacityManager__CapacityType, 0x4>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__CapacityManager__CapacityType, value__) == 0x0, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
// Type: Amazon.Runtime.Internal::CapacityManager
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::CapacityManager*
class CORDL_TYPE CapacityManager : public ::System::Object {
public:
  // Declarations
  using CapacityType = ::Amazon::Runtime::Internal::__CapacityManager__CapacityType;

  /// @brief Field _disposed, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed, put = __cordl_internal_set__disposed)) bool _disposed;

  /// @brief Field _rwlock, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__rwlock, put = __cordl_internal_set__rwlock))::System::Threading::ReaderWriterLockSlim* _rwlock;

  /// @brief Field _serviceUrlToCapacityMap, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__serviceUrlToCapacityMap,
                             put = setStaticF__serviceUrlToCapacityMap))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::Internal::RetryCapacity*>* _serviceUrlToCapacityMap;

  /// @brief Field initialRetryTokens, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_initialRetryTokens, put = __cordl_internal_set_initialRetryTokens)) int32_t initialRetryTokens;

  /// @brief Field noRetryIncrement, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_noRetryIncrement, put = __cordl_internal_set_noRetryIncrement)) int32_t noRetryIncrement;

  /// @brief Field retryCost, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_retryCost, put = __cordl_internal_set_retryCost)) int32_t retryCost;

  /// @brief Field timeoutRetryCost, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_timeoutRetryCost, put = __cordl_internal_set_timeoutRetryCost)) int32_t timeoutRetryCost;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AddNewRetryCapacity, addr 0x203431c, size 0x2a4, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::Internal::RetryCapacity* AddNewRetryCapacity(::StringW serviceURL);

  /// @brief Method Dispose, addr 0x2033d04, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x2033d70, size 0x38, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method GetRetryCapacity, addr 0x20341a0, size 0x44, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::Internal::RetryCapacity* GetRetryCapacity(::StringW serviceURL);

  static inline ::Amazon::Runtime::Internal::CapacityManager* New_ctor(int32_t throttleRetryCount, int32_t throttleRetryCost, int32_t throttleCost);

  static inline ::Amazon::Runtime::Internal::CapacityManager* New_ctor(int32_t throttleRetryCount, int32_t throttleRetryCost, int32_t throttleCost, int32_t timeoutRetryCost);

  /// @brief Method ReleaseCapacity, addr 0x2034074, size 0x12c, virtual false, abstract: false, final false
  static inline void ReleaseCapacity(int32_t capacity, ::Amazon::Runtime::Internal::RetryCapacity* retryCapacity);

  /// @brief Method ReleaseCapacity, addr 0x2033f64, size 0x110, virtual false, abstract: false, final false
  inline void ReleaseCapacity(::Amazon::Runtime::Internal::__CapacityManager__CapacityType capacityType, ::Amazon::Runtime::Internal::RetryCapacity* retryCapacity);

  /// @brief Method TryAcquireCapacity, addr 0x2033e44, size 0x8, virtual false, abstract: false, final false
  inline bool TryAcquireCapacity(::Amazon::Runtime::Internal::RetryCapacity* retryCapacity);

  /// @brief Method TryAcquireCapacity, addr 0x2033e4c, size 0x104, virtual false, abstract: false, final false
  inline bool TryAcquireCapacity(::Amazon::Runtime::Internal::RetryCapacity* retryCapacity, ::Amazon::Runtime::Internal::__CapacityManager__CapacityType capacityType);

  /// @brief Method TryGetRetryCapacity, addr 0x20341e4, size 0x138, virtual false, abstract: false, final false
  inline bool TryGetRetryCapacity(::StringW key, ByRef<::Amazon::Runtime::Internal::RetryCapacity*> value);

  /// @brief Method TryReleaseCapacity, addr 0x2033f50, size 0x14, virtual false, abstract: false, final false
  inline void TryReleaseCapacity(bool isRetryRequest, ::Amazon::Runtime::Internal::RetryCapacity* retryCapacity);

  constexpr bool const& __cordl_internal_get__disposed() const;

  constexpr bool& __cordl_internal_get__disposed();

  constexpr ::System::Threading::ReaderWriterLockSlim*& __cordl_internal_get__rwlock();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::ReaderWriterLockSlim*> const& __cordl_internal_get__rwlock() const;

  constexpr int32_t const& __cordl_internal_get_initialRetryTokens() const;

  constexpr int32_t& __cordl_internal_get_initialRetryTokens();

  constexpr int32_t const& __cordl_internal_get_noRetryIncrement() const;

  constexpr int32_t& __cordl_internal_get_noRetryIncrement();

  constexpr int32_t const& __cordl_internal_get_retryCost() const;

  constexpr int32_t& __cordl_internal_get_retryCost();

  constexpr int32_t const& __cordl_internal_get_timeoutRetryCost() const;

  constexpr int32_t& __cordl_internal_get_timeoutRetryCost();

  constexpr void __cordl_internal_set__disposed(bool value);

  constexpr void __cordl_internal_set__rwlock(::System::Threading::ReaderWriterLockSlim* value);

  constexpr void __cordl_internal_set_initialRetryTokens(int32_t value);

  constexpr void __cordl_internal_set_noRetryIncrement(int32_t value);

  constexpr void __cordl_internal_set_retryCost(int32_t value);

  constexpr void __cordl_internal_set_timeoutRetryCost(int32_t value);

  /// @brief Method .ctor, addr 0x2033da8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t throttleRetryCount, int32_t throttleRetryCost, int32_t throttleCost);

  /// @brief Method .ctor, addr 0x2033db0, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(int32_t throttleRetryCount, int32_t throttleRetryCost, int32_t throttleCost, int32_t timeoutRetryCost);

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::Internal::RetryCapacity*>* getStaticF__serviceUrlToCapacityMap();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF__serviceUrlToCapacityMap(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::Internal::RetryCapacity*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CapacityManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CapacityManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CapacityManager(CapacityManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CapacityManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CapacityManager(CapacityManager const&) = delete;

  /// @brief Field _disposed, offset: 0x10, size: 0x1, def value: None
  bool ____disposed;

  /// @brief Field _rwlock, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::ReaderWriterLockSlim* ____rwlock;

  /// @brief Field retryCost, offset: 0x20, size: 0x4, def value: None
  int32_t ___retryCost;

  /// @brief Field timeoutRetryCost, offset: 0x24, size: 0x4, def value: None
  int32_t ___timeoutRetryCost;

  /// @brief Field initialRetryTokens, offset: 0x28, size: 0x4, def value: None
  int32_t ___initialRetryTokens;

  /// @brief Field noRetryIncrement, offset: 0x2c, size: 0x4, def value: None
  int32_t ___noRetryIncrement;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::CapacityManager, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::CapacityManager, ____disposed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::CapacityManager, ____rwlock) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::CapacityManager, ___retryCost) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::CapacityManager, ___timeoutRetryCost) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::CapacityManager, ___initialRetryTokens) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::CapacityManager, ___noRetryIncrement) == 0x2c, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::__CapacityManager__CapacityType, "Amazon.Runtime.Internal", "CapacityManager/CapacityType");
NEED_NO_BOX(::Amazon::Runtime::Internal::CapacityManager);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::CapacityManager*, "Amazon.Runtime.Internal", "CapacityManager");
