#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IAP)
namespace Oculus::Platform::Models {
class ProductList;
}
namespace Oculus::Platform::Models {
class PurchaseList;
}
namespace Oculus::Platform::Models {
class Purchase;
}
namespace Oculus::Platform {
template <typename T> class Request_1;
}
namespace Oculus::Platform {
class Request;
}
// Forward declare root types
namespace Oculus::Platform {
class IAP;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::IAP);
// Type: Oculus.Platform::IAP
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::IAP*
class CORDL_TYPE IAP : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConsumePurchase, addr 0x19bf9a4, size 0x14c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request* ConsumePurchase(::StringW sku);

  /// @brief Method GetNextProductListPage, addr 0x19c00cc, size 0x1dc, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ProductList*>* GetNextProductListPage(::Oculus::Platform::Models::ProductList* list);

  /// @brief Method GetNextPurchaseListPage, addr 0x19c02a8, size 0x1dc, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PurchaseList*>* GetNextPurchaseListPage(::Oculus::Platform::Models::PurchaseList* list);

  /// @brief Method GetProductsBySKU, addr 0x19bfaf0, size 0x174, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ProductList*>* GetProductsBySKU(::ArrayW<::StringW, ::Array<::StringW>*> skus);

  /// @brief Method GetViewerPurchases, addr 0x19bfc64, size 0x158, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PurchaseList*>* GetViewerPurchases();

  /// @brief Method GetViewerPurchasesDurableCache, addr 0x19bfdbc, size 0x158, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PurchaseList*>* GetViewerPurchasesDurableCache();

  /// @brief Method LaunchCheckoutFlow, addr 0x19bff14, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Purchase*>* LaunchCheckoutFlow(::StringW sku);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IAP();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IAP", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IAP(IAP&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IAP", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAP(IAP const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::IAP, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::IAP);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::IAP*, "Oculus.Platform", "IAP");
